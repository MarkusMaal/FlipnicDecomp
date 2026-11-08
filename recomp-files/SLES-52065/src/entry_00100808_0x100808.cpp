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

// Function: entry_00100808
// Address: 0x100808 - 0x100858
void entry_00100808_0x100808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100808_0x100808");
#endif

    switch (ctx->pc) {
        case 0x100830u: goto label_100830;
        default: break;
    }

    ctx->pc = 0x100808u;

    // 0x100808: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x100808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x10080c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x10080cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x100810: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x100810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x100814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100818: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x100818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10081c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x10081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x100820: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x100824: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x100824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x100828: 0xc04ce04  jal         func_133810
    ctx->pc = 0x100828u;
    SET_GPR_U32(ctx, 31, 0x100830u);
    ctx->pc = 0x10082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100828u;
    // 0x10082c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x100828u, 0x100830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100830u;
label_100830:
    // 0x100830: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x100834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100838: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x100838u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10083c: 0x3c02c479  lui         $v0, 0xC479
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50297 << 16));
    // 0x100840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x100840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100844: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x100844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x100848: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x100848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x10084c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10084cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100850: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x100850u;
    {
        const bool branch_taken_0x100850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100850u;
        // 0x100854: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100850) {
            ctx->pc = 0x100884u;
            return;
        }
    }
    ctx->pc = 0x100858u;
}
