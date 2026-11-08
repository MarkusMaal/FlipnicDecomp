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

// Function: entry_00132288
// Address: 0x132288 - 0x1322a8
void entry_00132288_0x132288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132288_0x132288");
#endif

    ctx->pc = 0x132288u;

    // 0x132288: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x132288u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x13228c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132290: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x132290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x132294: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x132294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x132298: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x132298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13229c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1322a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1322A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1322A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322A0u;
        // 0x1322a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1322A8u;
}
