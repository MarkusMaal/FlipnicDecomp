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

// Function: entry_001e81ec
// Address: 0x1e81ec - 0x1e8224
void entry_001e81ec_0x1e81ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e81ec_0x1e81ec");
#endif

    switch (ctx->pc) {
        case 0x1e8200u: goto label_1e8200;
        default: break;
    }

    ctx->pc = 0x1e81ecu;

    // 0x1e81ec: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e81f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e81f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e81f8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1E81F8u;
    SET_GPR_U32(ctx, 31, 0x1E8200u);
    ctx->pc = 0x1E81FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81F8u;
    // 0x1e81fc: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E81F8u, 0x1E8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8200u;
label_1e8200:
    // 0x1e8200: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e8204: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e8204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e8208: 0x2442c310  addiu       $v0, $v0, -0x3CF0
    ctx->pc = 0x1e8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x1e820c: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e820cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e8210: 0x24843ef0  addiu       $a0, $a0, 0x3EF0
    ctx->pc = 0x1e8210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
    // 0x1e8214: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e8214u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1e8218: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e8218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e821c: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E821Cu;
    SET_GPR_U32(ctx, 31, 0x1E8224u);
    ctx->pc = 0x1E8220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E821Cu;
    // 0x1e8220: 0x24c67980  addiu       $a2, $a2, 0x7980 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E821Cu, 0x1E8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8224u;
}
