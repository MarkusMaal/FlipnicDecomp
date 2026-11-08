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

// Function: entry_0012e458
// Address: 0x12e458 - 0x12e484
void entry_0012e458_0x12e458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e458_0x12e458");
#endif

    switch (ctx->pc) {
        case 0x12e470u: goto label_12e470;
        default: break;
    }

    ctx->pc = 0x12e458u;

    // 0x12e458: 0x0  nop
    ctx->pc = 0x12e458u;
    // NOP
    // 0x12e45c: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12E45Cu;
    {
        const bool branch_taken_0x12e45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12e45c) {
            ctx->pc = 0x12E44Cu;
            return;
        }
    }
    ctx->pc = 0x12E464u;
    // 0x12e464: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x12e464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12e468: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12E468u;
    SET_GPR_U32(ctx, 31, 0x12E470u);
    ctx->pc = 0x12E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E468u;
    // 0x12e46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12E468u, 0x12E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E470u;
label_12e470:
    // 0x12e470: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x12e470u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x12e474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e478: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12e47c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E47Cu;
        // 0x12e480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E484u;
}
