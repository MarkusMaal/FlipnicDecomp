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

// Function: caseD_11
// Address: 0x1c7200 - 0x1c7240
void caseD_11_0x1c7200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x1c7200");
#endif

    switch (ctx->pc) {
        case 0x1c720cu: goto label_1c720c;
        case 0x1c7218u: goto label_1c7218;
        case 0x1c7224u: goto label_1c7224;
        case 0x1c7234u: goto label_1c7234;
        default: break;
    }

    ctx->pc = 0x1c7200u;

    // 0x1c7200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7204: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7204u;
    SET_GPR_U32(ctx, 31, 0x1C720Cu);
    ctx->pc = 0x1C7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7204u;
    // 0x1c7208: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7204u, 0x1C720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C720Cu;
label_1c720c:
    // 0x1c720c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c720cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7210: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7210u;
    SET_GPR_U32(ctx, 31, 0x1C7218u);
    ctx->pc = 0x1C7214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7210u;
    // 0x1c7214: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7210u, 0x1C7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7218u;
label_1c7218:
    // 0x1c7218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c721c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C721Cu;
    SET_GPR_U32(ctx, 31, 0x1C7224u);
    ctx->pc = 0x1C7220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C721Cu;
    // 0x1c7220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C721Cu, 0x1C7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7224u;
label_1c7224:
    // 0x1c7224: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7228: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c722c: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C722Cu;
    SET_GPR_U32(ctx, 31, 0x1C7234u);
    ctx->pc = 0x1C7230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C722Cu;
    // 0x1c7230: 0x24a520d0  addiu       $a1, $a1, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C722Cu, 0x1C7234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7234u;
label_1c7234:
    // 0x1c7234: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1c7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c7238: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x1C7238u;
    {
        const bool branch_taken_0x1c7238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7238u;
        // 0x1c723c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7238) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7240u;
}
