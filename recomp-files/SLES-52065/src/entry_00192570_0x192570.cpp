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

// Function: entry_00192570
// Address: 0x192570 - 0x1925b0
void entry_00192570_0x192570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192570_0x192570");
#endif

    switch (ctx->pc) {
        case 0x1925a0u: goto label_1925a0;
        default: break;
    }

    ctx->pc = 0x192570u;

    // 0x192570: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x192570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x192574: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192578: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x192578u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x36D700u));
    // 0x19257c: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x19257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
    // 0x192580: 0x78420560  lq          $v0, 0x560($v0)
    ctx->pc = 0x192580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x192584: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x192584u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x192588: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x192588u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x19258c: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x19258cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x192590: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192590u;
    {
        const bool branch_taken_0x192590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192590u;
        // 0x192594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192590) {
            ctx->pc = 0x1925B0u;
            return;
        }
    }
    ctx->pc = 0x192598u;
    // 0x192598: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x192598u;
    SET_GPR_U32(ctx, 31, 0x1925A0u);
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x192598u, 0x1925A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925A0u;
label_1925a0:
    // 0x1925a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1925A0u;
    {
        const bool branch_taken_0x1925a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1925A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925A0u;
        // 0x1925a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925a0) {
            ctx->pc = 0x1925B0u;
            return;
        }
    }
    ctx->pc = 0x1925A8u;
    // 0x1925a8: 0xc064954  jal         func_192550
    ctx->pc = 0x1925A8u;
    SET_GPR_U32(ctx, 31, 0x1925B0u);
    ctx->pc = 0x192550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192550u, 0x1925A8u, 0x1925B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925B0u;
}
