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

// Function: entry_00141d34
// Address: 0x141d34 - 0x141d60
void entry_00141d34_0x141d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d34_0x141d34");
#endif

    switch (ctx->pc) {
        case 0x141d5cu: goto label_141d5c;
        default: break;
    }

    ctx->pc = 0x141d34u;

    // 0x141d34: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x141d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x141d38: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x141d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x141d3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d44: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x141d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141d48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x141d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141d50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x141d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141d54: 0xc050850  jal         func_142140
    ctx->pc = 0x141D54u;
    SET_GPR_U32(ctx, 31, 0x141D5Cu);
    ctx->pc = 0x141D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D54u;
    // 0x141d58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142140u, 0x141D54u, 0x141D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D5Cu;
label_141d5c:
    // 0x141d5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x141d5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x141d60u;
}
