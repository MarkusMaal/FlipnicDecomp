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

// Function: entry_00200c08
// Address: 0x200c08 - 0x200c60
void entry_00200c08_0x200c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200c08_0x200c08");
#endif

    switch (ctx->pc) {
        case 0x200c58u: goto label_200c58;
        default: break;
    }

    ctx->pc = 0x200c08u;

    // 0x200c08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200c0c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x200c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x200c10: 0x14e80013  bne         $a3, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x200C10u;
    {
        const bool branch_taken_0x200c10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x200C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C10u;
        // 0x200c14: 0x823024  and         $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c10) {
            ctx->pc = 0x200C60u;
            return;
        }
    }
    ctx->pc = 0x200C18u;
    // 0x200c18: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x200c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x200c1c: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x200c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x200c20: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x200c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x200c24: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x200C24u;
    {
        const bool branch_taken_0x200c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c24) {
            ctx->pc = 0x200C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C24u;
            // 0x200c28: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C94u;
            return;
        }
    }
    ctx->pc = 0x200C2Cu;
    // 0x200c2c: 0x761023  subu        $v0, $v1, $s6
    ctx->pc = 0x200c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x200c30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c34: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x200c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x200c38: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x200c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x200c3c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x200c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x200c40: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x200c40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x200c44: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x200c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x200c48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x200c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200c4c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x200c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x200c50: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x200C50u;
    SET_GPR_U32(ctx, 31, 0x200C58u);
    ctx->pc = 0x200C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C50u;
    // 0x200c54: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x200C50u, 0x200C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C58u;
label_200c58:
    // 0x200c58: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x200C58u;
    {
        const bool branch_taken_0x200c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C58u;
        // 0x200c5c: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c58) {
            ctx->pc = 0x201078u;
            return;
        }
    }
    ctx->pc = 0x200C60u;
}
