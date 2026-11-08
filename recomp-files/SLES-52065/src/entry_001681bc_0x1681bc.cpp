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

// Function: entry_001681bc
// Address: 0x1681bc - 0x1681dc
void entry_001681bc_0x1681bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001681bc_0x1681bc");
#endif

    switch (ctx->pc) {
        case 0x1681d0u: goto label_1681d0;
        default: break;
    }

    ctx->pc = 0x1681bcu;

    // 0x1681bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1681bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1681c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1681c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1681c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1681c8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1681C8u;
    SET_GPR_U32(ctx, 31, 0x1681D0u);
    ctx->pc = 0x1681CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681C8u;
    // 0x1681cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1681C8u, 0x1681D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681D0u;
label_1681d0:
    // 0x1681d0: 0x3c034086  lui         $v1, 0x4086
    ctx->pc = 0x1681d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16518 << 16));
    // 0x1681d4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1681d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1681d8: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x1681d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    ctx->pc = 0x1681dcu;
}
