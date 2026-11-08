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

// Function: entry_001367ec
// Address: 0x1367ec - 0x13681c
void entry_001367ec_0x1367ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001367ec_0x1367ec");
#endif

    switch (ctx->pc) {
        case 0x1367f8u: goto label_1367f8;
        case 0x136804u: goto label_136804;
        default: break;
    }

    ctx->pc = 0x1367ecu;

    // 0x1367ec: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x1367ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1367f0: 0xc0497d8  jal         func_125F60
    ctx->pc = 0x1367F0u;
    SET_GPR_U32(ctx, 31, 0x1367F8u);
    ctx->pc = 0x1367F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367F0u;
    // 0x1367f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F60u, 0x1367F0u, 0x1367F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367F8u;
label_1367f8:
    // 0x1367f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1367f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367fc: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x1367FCu;
    SET_GPR_U32(ctx, 31, 0x136804u);
    ctx->pc = 0x136800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367FCu;
    // 0x136800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313B0u, 0x1367FCu, 0x136804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136804u;
label_136804:
    // 0x136804: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x136804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x136808: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x136808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13680c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13680Cu;
    {
        const bool branch_taken_0x13680c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x136810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13680Cu;
        // 0x136810: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13680c) {
            ctx->pc = 0x136820u;
            return;
        }
    }
    ctx->pc = 0x136814u;
    // 0x136814: 0xc0401a4  jal         func_100690
    ctx->pc = 0x136814u;
    SET_GPR_U32(ctx, 31, 0x13681Cu);
    ctx->pc = 0x136818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136814u;
    // 0x136818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x136814u, 0x13681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13681Cu;
}
