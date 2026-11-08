#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00136090
// Address: 0x136090 - 0x136154
void FUN_00136090_0x136090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136090_0x136090");
#endif

    switch (ctx->pc) {
        case 0x1360d8u: goto label_1360d8;
        case 0x13610cu: goto label_13610c;
        default: break;
    }

    ctx->pc = 0x136090u;

    // 0x136090: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x136090u;
    {
        const bool branch_taken_0x136090 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x136094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136090u;
        // 0x136094: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136090) {
            ctx->pc = 0x1360A0u;
            goto label_1360a0;
        }
    }
    ctx->pc = 0x136098u;
    // 0x136098: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x136098u;
    {
        const bool branch_taken_0x136098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136098) {
            ctx->pc = 0x13614Cu;
            goto label_13614c;
        }
    }
    ctx->pc = 0x1360A0u;
label_1360a0:
    // 0x1360a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1360a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1360a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1360a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1360a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1360a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1360ac: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x1360acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1360b0: 0x1261023  subu        $v0, $t1, $a2
    ctx->pc = 0x1360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1360b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1360B4u;
    {
        const bool branch_taken_0x1360b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1360B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360B4u;
        // 0x1360b8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360b4) {
            ctx->pc = 0x1360C4u;
            goto label_1360c4;
        }
    }
    ctx->pc = 0x1360BCu;
    // 0x1360bc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1360bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1360c0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1360c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1360c4:
    // 0x1360c4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1360C4u;
    {
        const bool branch_taken_0x1360c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360C4u;
        // 0x1360c8: 0xc9082b  sltu        $at, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360c4) {
            ctx->pc = 0x1360F4u;
            goto label_1360f4;
        }
    }
    ctx->pc = 0x1360CCu;
    // 0x1360cc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1360ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360d0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1360D0u;
    {
        const bool branch_taken_0x1360d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360D0u;
        // 0x1360d4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360d0) {
            ctx->pc = 0x1360F4u;
            goto label_1360f4;
        }
    }
    ctx->pc = 0x1360D8u;
label_1360d8:
    // 0x1360d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1360d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1360dc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1360dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1360e0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1360e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1360e4: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x1360e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1360e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1360e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1360ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1360ECu;
    {
        const bool branch_taken_0x1360ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1360ec) {
            ctx->pc = 0x1360D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1360d8;
        }
    }
    ctx->pc = 0x1360F4u;
label_1360f4:
    // 0x1360f4: 0x0  nop
    ctx->pc = 0x1360f4u;
    // NOP
    // 0x1360f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1360f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1360fc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1360fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x136100: 0x69082b  sltu        $at, $v1, $t1
    ctx->pc = 0x136100u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x136104: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x136104u;
    {
        const bool branch_taken_0x136104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136104) {
            ctx->pc = 0x136128u;
            goto label_136128;
        }
    }
    ctx->pc = 0x13610Cu;
label_13610c:
    // 0x13610c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x13610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x136110: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x136110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x136114: 0x0  nop
    ctx->pc = 0x136114u;
    // NOP
    // 0x136118: 0x0  nop
    ctx->pc = 0x136118u;
    // NOP
    // 0x13611c: 0x0  nop
    ctx->pc = 0x13611cu;
    // NOP
    // 0x136120: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136120u;
    {
        const bool branch_taken_0x136120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136120) {
            ctx->pc = 0x13610Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13610c;
        }
    }
    ctx->pc = 0x136128u;
label_136128:
    // 0x136128: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x136128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13612c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13612Cu;
    {
        const bool branch_taken_0x13612c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x136130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13612Cu;
        // 0x136130: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13612c) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136134u;
    // 0x136134: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x136134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x136138: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x136138u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_13613c:
    // 0x13613c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x136140: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x136140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136144: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x136144u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x136148: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x136148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_13614c:
    // 0x13614c: 0x3e00008  jr          $ra
    ctx->pc = 0x13614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136154u;
}
