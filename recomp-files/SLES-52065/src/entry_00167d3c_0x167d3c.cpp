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

// Function: entry_00167d3c
// Address: 0x167d3c - 0x167d5c
void entry_00167d3c_0x167d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167d3c_0x167d3c");
#endif

    switch (ctx->pc) {
        case 0x167d4cu: goto label_167d4c;
        case 0x167d58u: goto label_167d58;
        default: break;
    }

    ctx->pc = 0x167d3cu;

    // 0x167d3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x167d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x167d40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167d44: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x167D44u;
    SET_GPR_U32(ctx, 31, 0x167D4Cu);
    ctx->pc = 0x167D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D44u;
    // 0x167d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x167D44u, 0x167D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D4Cu;
label_167d4c:
    // 0x167d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d50: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x167D50u;
    SET_GPR_U32(ctx, 31, 0x167D58u);
    ctx->pc = 0x167D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D50u;
    // 0x167d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x167D50u, 0x167D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D58u;
label_167d58:
    // 0x167d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x167d5cu;
}
