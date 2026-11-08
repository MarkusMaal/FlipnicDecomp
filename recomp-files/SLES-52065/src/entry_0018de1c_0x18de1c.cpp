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

// Function: entry_0018de1c
// Address: 0x18de1c - 0x18de54
void entry_0018de1c_0x18de1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de1c_0x18de1c");
#endif

    switch (ctx->pc) {
        case 0x18de4cu: goto label_18de4c;
        default: break;
    }

    ctx->pc = 0x18de1cu;

    // 0x18de1c: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
    // 0x18de20: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
    // 0x18de24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18de24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18de28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18de28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18de2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de30: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18de30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18de34: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18de38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18de38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18de3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18de3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18de40: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x18de40u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x18de44: 0xc063270  jal         func_18C9C0
    ctx->pc = 0x18DE44u;
    SET_GPR_U32(ctx, 31, 0x18DE4Cu);
    ctx->pc = 0x18DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE44u;
    // 0x18de48: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18DE44u, 0x18DE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE4Cu;
label_18de4c:
    // 0x18de4c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x18DE4Cu;
    {
        const bool branch_taken_0x18de4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de4c) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18DE54u;
}
