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

// Function: FUN_001e8940
// Address: 0x1e8940 - 0x1e89d0
void FUN_001e8940_0x1e8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8940_0x1e8940");
#endif

    switch (ctx->pc) {
        case 0x1e8970u: goto label_1e8970;
        default: break;
    }

    ctx->pc = 0x1e8940u;

    // 0x1e8940: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1e8940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1e8944: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1e8944u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e8948: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1e8948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1e894c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1e894cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1e8950: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e8950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e8954: 0x0  nop
    ctx->pc = 0x1e8954u;
    // NOP
    // 0x1e8958: 0x0  nop
    ctx->pc = 0x1e8958u;
    // NOP
    // 0x1e895c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e895cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e8960: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x1e8960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8964: 0x19000018  blez        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E8964u;
    {
        const bool branch_taken_0x1e8964 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x1e8964) {
            ctx->pc = 0x1E89C8u;
            goto label_1e89c8;
        }
    }
    ctx->pc = 0x1E896Cu;
    // 0x1e896c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e896cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8970:
    // 0x1e8970: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8970u;
    {
        const bool branch_taken_0x1e8970 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8970u;
        // 0x1e8974: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8970) {
            ctx->pc = 0x1E8980u;
            goto label_1e8980;
        }
    }
    ctx->pc = 0x1E8978u;
    // 0x1e8978: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1e8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e897c: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x1e897cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_1e8980:
    // 0x1e8980: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1e8984: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e8984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e8988: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1e8988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e898c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e898cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e8990: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e8990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e8994: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1e8994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e8998: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e8998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e899c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E899Cu;
    {
        const bool branch_taken_0x1e899c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E899Cu;
        // 0x1e89a0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e899c) {
            ctx->pc = 0x1E89B4u;
            goto label_1e89b4;
        }
    }
    ctx->pc = 0x1E89A4u;
    // 0x1e89a4: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e89a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e89a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e89a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E89ACu;
    {
        const bool branch_taken_0x1e89ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89ACu;
        // 0x1e89b0: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89ac) {
            ctx->pc = 0x1E89BCu;
            goto label_1e89bc;
        }
    }
    ctx->pc = 0x1E89B4u;
label_1e89b4:
    // 0x1e89b4: 0x0  nop
    ctx->pc = 0x1e89b4u;
    // NOP
    // 0x1e89b8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e89b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e89bc:
    // 0x1e89bc: 0x0  nop
    ctx->pc = 0x1e89bcu;
    // NOP
    // 0x1e89c0: 0x1d00ffeb  bgtz        $t0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1E89C0u;
    {
        const bool branch_taken_0x1e89c0 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1E89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89C0u;
        // 0x1e89c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89c0) {
            ctx->pc = 0x1E8970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8970;
        }
    }
    ctx->pc = 0x1E89C8u;
label_1e89c8:
    // 0x1e89c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E89C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89C8u;
        // 0x1e89cc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E89C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E89D0u;
}
