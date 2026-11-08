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

// Function: entry_001659c0
// Address: 0x1659c0 - 0x165a00
void entry_001659c0_0x1659c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001659c0_0x1659c0");
#endif

    switch (ctx->pc) {
        case 0x1659d8u: goto label_1659d8;
        case 0x1659ecu: goto label_1659ec;
        case 0x1659f8u: goto label_1659f8;
        default: break;
    }

    ctx->pc = 0x1659c0u;

    // 0x1659c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1659c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1659c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1659c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1659cc: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x1659ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x1659d0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1659D0u;
    SET_GPR_U32(ctx, 31, 0x1659D8u);
    ctx->pc = 0x1659D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659D0u;
    // 0x1659d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1659D0u, 0x1659D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659D8u;
label_1659d8:
    // 0x1659d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1659d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1659dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1659dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1659e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1659e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1659e4: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x1659E4u;
    SET_GPR_U32(ctx, 31, 0x1659ECu);
    ctx->pc = 0x1659E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659E4u;
    // 0x1659e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x1659E4u, 0x1659ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659ECu;
label_1659ec:
    // 0x1659ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1659ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659f0: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x1659F0u;
    SET_GPR_U32(ctx, 31, 0x1659F8u);
    ctx->pc = 0x1659F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659F0u;
    // 0x1659f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x1659F0u, 0x1659F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659F8u;
label_1659f8:
    // 0x1659f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1659F8u;
    {
        const bool branch_taken_0x1659f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1659FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659F8u;
        // 0x1659fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659f8) {
            ctx->pc = 0x165A08u;
            return;
        }
    }
    ctx->pc = 0x165A00u;
}
