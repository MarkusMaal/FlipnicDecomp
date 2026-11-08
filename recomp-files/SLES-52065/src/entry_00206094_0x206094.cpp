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

// Function: entry_00206094
// Address: 0x206094 - 0x2060c0
void entry_00206094_0x206094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206094_0x206094");
#endif

    switch (ctx->pc) {
        case 0x2060b8u: goto label_2060b8;
        default: break;
    }

    ctx->pc = 0x206094u;

    // 0x206094: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x206094u;
    {
        const bool branch_taken_0x206094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206094) {
            ctx->pc = 0x206098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206094u;
            // 0x206098: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060DCu;
            return;
        }
    }
    ctx->pc = 0x20609Cu;
    // 0x20609c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x20609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2060a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2060A0u;
    {
        const bool branch_taken_0x2060a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060A0u;
        // 0x2060a4: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060a0) {
            ctx->pc = 0x2060C0u;
            return;
        }
    }
    ctx->pc = 0x2060A8u;
    // 0x2060a8: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2060A8u;
    {
        const bool branch_taken_0x2060a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2060a8) {
            ctx->pc = 0x2060ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2060A8u;
            // 0x2060ac: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060C0u;
            return;
        }
    }
    ctx->pc = 0x2060B0u;
    // 0x2060b0: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x2060B0u;
    SET_GPR_U32(ctx, 31, 0x2060B8u);
    ctx->pc = 0x2060B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060B0u;
    // 0x2060b4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x2060B0u, 0x2060B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060B8u;
label_2060b8:
    // 0x2060b8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2060b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2060bc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2060bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x2060c0u;
}
