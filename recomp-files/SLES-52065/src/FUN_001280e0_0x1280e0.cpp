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

// Function: FUN_001280e0
// Address: 0x1280e0 - 0x128134
void FUN_001280e0_0x1280e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001280e0_0x1280e0");
#endif

    switch (ctx->pc) {
        case 0x128114u: goto label_128114;
        default: break;
    }

    ctx->pc = 0x1280e0u;

    // 0x1280e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1280e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1280e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1280e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1280e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1280e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1280ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1280ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1280f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1280f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1280f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1280f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1280f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280fc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1280FCu;
    {
        const bool branch_taken_0x1280fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x128100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280FCu;
        // 0x128100: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280fc) {
            ctx->pc = 0x128114u;
            goto label_128114;
        }
    }
    ctx->pc = 0x128104u;
    // 0x128104: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x128104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x128108: 0x2484eb90  addiu       $a0, $a0, -0x1470
    ctx->pc = 0x128108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962064));
    // 0x12810c: 0xc080874  jal         func_2021D0
    ctx->pc = 0x12810Cu;
    SET_GPR_U32(ctx, 31, 0x128114u);
    ctx->pc = 0x128110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12810Cu;
    // 0x128110: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x12810Cu, 0x128114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128114u;
label_128114:
    // 0x128114: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x128114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
    // 0x128118: 0xe6340080  swc1        $f20, 0x80($s1)
    ctx->pc = 0x128118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x12811c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12811cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128120: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x128120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x128124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x128124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128128: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x128128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12812c: 0x3e00008  jr          $ra
    ctx->pc = 0x12812Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12812Cu;
        // 0x128130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12812Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128134u;
}
