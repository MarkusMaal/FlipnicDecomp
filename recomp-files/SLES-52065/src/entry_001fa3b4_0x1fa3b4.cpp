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

// Function: entry_001fa3b4
// Address: 0x1fa3b4 - 0x1fa3e4
void entry_001fa3b4_0x1fa3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa3b4_0x1fa3b4");
#endif

    switch (ctx->pc) {
        case 0x1fa3ccu: goto label_1fa3cc;
        default: break;
    }

    ctx->pc = 0x1fa3b4u;

    // 0x1fa3b4: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x1fa3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x1fa3b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fa3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3bc: 0x25294900  addiu       $t1, $t1, 0x4900
    ctx->pc = 0x1fa3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18688));
    // 0x1fa3c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fa3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3c4: 0xc07e9a8  jal         func_1FA6A0
    ctx->pc = 0x1FA3C4u;
    SET_GPR_U32(ctx, 31, 0x1FA3CCu);
    ctx->pc = 0x1FA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3C4u;
    // 0x1fa3c8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6A0u, 0x1FA3C4u, 0x1FA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3CCu;
label_1fa3cc:
    // 0x1fa3cc: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA3CCu;
    {
        const bool branch_taken_0x1fa3cc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3CCu;
        // 0x1fa3d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3cc) {
            ctx->pc = 0x1FA3F4u;
            return;
        }
    }
    ctx->pc = 0x1FA3D4u;
    // 0x1fa3d4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa3d8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1fa3dc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa3e0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1fa3e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    ctx->pc = 0x1fa3e4u;
}
