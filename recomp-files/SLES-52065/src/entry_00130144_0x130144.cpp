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

// Function: entry_00130144
// Address: 0x130144 - 0x130180
void entry_00130144_0x130144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130144_0x130144");
#endif

    switch (ctx->pc) {
        case 0x130160u: goto label_130160;
        case 0x130174u: goto label_130174;
        default: break;
    }

    ctx->pc = 0x130144u;

    // 0x130144: 0x8f908584  lw          $s0, -0x7A7C($gp)
    ctx->pc = 0x130144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935940)));
    // 0x130148: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x130148u;
    {
        const bool branch_taken_0x130148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130148) {
            ctx->pc = 0x13018Cu;
            return;
        }
    }
    ctx->pc = 0x130150u;
    // 0x130150: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x130150u;
    {
        const bool branch_taken_0x130150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130150u;
        // 0x130154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130150) {
            ctx->pc = 0x130184u;
            return;
        }
    }
    ctx->pc = 0x130158u;
    // 0x130158: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x130158u;
    SET_GPR_U32(ctx, 31, 0x130160u);
    ctx->pc = 0x13015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130158u;
    // 0x13015c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x130158u, 0x130160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130160u;
label_130160:
    // 0x130160: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x130160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130164: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x130164u;
    {
        const bool branch_taken_0x130164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130164u;
        // 0x130168: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130164) {
            ctx->pc = 0x130180u;
            return;
        }
    }
    ctx->pc = 0x13016Cu;
    // 0x13016c: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x13016Cu;
    SET_GPR_U32(ctx, 31, 0x130174u);
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x13016Cu, 0x130174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130174u;
label_130174:
    // 0x130174: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130178: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130178u;
    SET_GPR_U32(ctx, 31, 0x130180u);
    ctx->pc = 0x13017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130178u;
    // 0x13017c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130178u, 0x130180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130180u;
}
