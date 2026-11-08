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

// Function: FUN_00117160
// Address: 0x117160 - 0x117204
void FUN_00117160_0x117160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117160_0x117160");
#endif

    switch (ctx->pc) {
        case 0x11718cu: goto label_11718c;
        default: break;
    }

    ctx->pc = 0x117160u;

    // 0x117160: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117160u;
    {
        const bool branch_taken_0x117160 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x117164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117160u;
        // 0x117164: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117160) {
            ctx->pc = 0x117178u;
            goto label_117178;
        }
    }
    ctx->pc = 0x117168u;
    // 0x117168: 0x28821e7e  slti        $v0, $a0, 0x1E7E
    ctx->pc = 0x117168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7806) ? 1 : 0);
    // 0x11716c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11716Cu;
    {
        const bool branch_taken_0x11716c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11716Cu;
        // 0x117170: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11716c) {
            ctx->pc = 0x117180u;
            goto label_117180;
        }
    }
    ctx->pc = 0x117174u;
    // 0x117174: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117178:
    // 0x117178: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x117178u;
    {
        const bool branch_taken_0x117178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117178) {
            ctx->pc = 0x1171FCu;
            goto label_1171fc;
        }
    }
    ctx->pc = 0x117180u;
label_117180:
    // 0x117180: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x117180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x117184: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x117184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x117188: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x117188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
label_11718c:
    // 0x11718c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x11718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x117190: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x117190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117194: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x117194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x117198: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x117198u;
    {
        const bool branch_taken_0x117198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117198) {
            ctx->pc = 0x1171ECu;
            goto label_1171ec;
        }
    }
    ctx->pc = 0x1171A0u;
    // 0x1171a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1171a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1171a4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1171a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1171a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1171a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1171ac: 0x24420a34  addiu       $v0, $v0, 0xA34
    ctx->pc = 0x1171acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2612));
    // 0x1171b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1171b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1171b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1171b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1171b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1171b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1171bc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1171bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1171c0: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x1171c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1171c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1171C4u;
    {
        const bool branch_taken_0x1171c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171C4u;
        // 0x1171c8: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c4) {
            ctx->pc = 0x1171D4u;
            goto label_1171d4;
        }
    }
    ctx->pc = 0x1171CCu;
    // 0x1171cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1171CCu;
    {
        const bool branch_taken_0x1171cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171CCu;
        // 0x1171d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171cc) {
            ctx->pc = 0x1171E4u;
            goto label_1171e4;
        }
    }
    ctx->pc = 0x1171D4u;
label_1171d4:
    // 0x1171d4: 0x24420a38  addiu       $v0, $v0, 0xA38
    ctx->pc = 0x1171d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2616));
    // 0x1171d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1171d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1171dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1171dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1171e0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1171e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1171e4:
    // 0x1171e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1171E4u;
    {
        const bool branch_taken_0x1171e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1171e4) {
            ctx->pc = 0x1171F8u;
            goto label_1171f8;
        }
    }
    ctx->pc = 0x1171ECu;
label_1171ec:
    // 0x1171ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1171ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1171f0: 0x4a1ffe6  bgez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1171F0u;
    {
        const bool branch_taken_0x1171f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1171F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F0u;
        // 0x1171f4: 0x24e7fff4  addiu       $a3, $a3, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171f0) {
            ctx->pc = 0x11718Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11718c;
        }
    }
    ctx->pc = 0x1171F8u;
label_1171f8:
    // 0x1171f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1171f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1171fc:
    // 0x1171fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1171FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1171FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117204u;
}
