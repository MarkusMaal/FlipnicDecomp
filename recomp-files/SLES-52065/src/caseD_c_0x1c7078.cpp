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

// Function: caseD_c
// Address: 0x1c7078 - 0x1c70b8
void caseD_c_0x1c7078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1c7078");
#endif

    switch (ctx->pc) {
        case 0x1c7084u: goto label_1c7084;
        case 0x1c7090u: goto label_1c7090;
        case 0x1c709cu: goto label_1c709c;
        case 0x1c70acu: goto label_1c70ac;
        default: break;
    }

    ctx->pc = 0x1c7078u;

    // 0x1c7078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c707c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C707Cu;
    SET_GPR_U32(ctx, 31, 0x1C7084u);
    ctx->pc = 0x1C7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C707Cu;
    // 0x1c7080: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C707Cu, 0x1C7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7084u;
label_1c7084:
    // 0x1c7084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7088: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7088u;
    SET_GPR_U32(ctx, 31, 0x1C7090u);
    ctx->pc = 0x1C708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7088u;
    // 0x1c708c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7088u, 0x1C7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7090u;
label_1c7090:
    // 0x1c7090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7094: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7094u;
    SET_GPR_U32(ctx, 31, 0x1C709Cu);
    ctx->pc = 0x1C7098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7094u;
    // 0x1c7098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7094u, 0x1C709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C709Cu;
label_1c709c:
    // 0x1c709c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c709cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c70a0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c70a4: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C70A4u;
    SET_GPR_U32(ctx, 31, 0x1C70ACu);
    ctx->pc = 0x1C70A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70A4u;
    // 0x1c70a8: 0x24a520b8  addiu       $a1, $a1, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C70A4u, 0x1C70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70ACu;
label_1c70ac:
    // 0x1c70ac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1c70acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c70b0: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x1C70B0u;
    {
        const bool branch_taken_0x1c70b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70B0u;
        // 0x1c70b4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70b0) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C70B8u;
}
