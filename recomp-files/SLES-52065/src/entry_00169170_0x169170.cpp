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

// Function: entry_00169170
// Address: 0x169170 - 0x16919c
void entry_00169170_0x169170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169170_0x169170");
#endif

    switch (ctx->pc) {
        case 0x169194u: goto label_169194;
        default: break;
    }

    ctx->pc = 0x169170u;

    // 0x169170: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x169170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x169174: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x169174u;
    {
        const bool branch_taken_0x169174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x169178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169174u;
        // 0x169178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169174) {
            ctx->pc = 0x16919Cu;
            return;
        }
    }
    ctx->pc = 0x16917Cu;
    // 0x16917c: 0x7a060010  lq          $a2, 0x10($s0)
    ctx->pc = 0x16917cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x169180: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x169180u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x169184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169188: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x169188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x16918c: 0xc055c40  jal         func_157100
    ctx->pc = 0x16918Cu;
    SET_GPR_U32(ctx, 31, 0x169194u);
    ctx->pc = 0x169190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16918Cu;
    // 0x169190: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16918Cu, 0x169194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169194u;
label_169194:
    // 0x169194: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x169194u;
    {
        const bool branch_taken_0x169194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169194u;
        // 0x169198: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169194) {
            ctx->pc = 0x16919Cu;
            return;
        }
    }
    ctx->pc = 0x16919Cu;
}
