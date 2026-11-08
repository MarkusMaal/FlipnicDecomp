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

// Function: entry_00166004
// Address: 0x166004 - 0x166020
void entry_00166004_0x166004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166004_0x166004");
#endif

    switch (ctx->pc) {
        case 0x16601cu: goto label_16601c;
        default: break;
    }

    ctx->pc = 0x166004u;

    // 0x166004: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x166004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166008: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16600c: 0xa6030224  sh          $v1, 0x224($s0)
    ctx->pc = 0x16600cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x166010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166014: 0xc0425a4  jal         func_109690
    ctx->pc = 0x166014u;
    SET_GPR_U32(ctx, 31, 0x16601Cu);
    ctx->pc = 0x166018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166014u;
    // 0x166018: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x166014u, 0x16601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16601Cu;
label_16601c:
    // 0x16601c: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x16601cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->pc = 0x166020u;
}
