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

// Function: entry_0017a050
// Address: 0x17a050 - 0x17a080
void entry_0017a050_0x17a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a050_0x17a050");
#endif

    ctx->pc = 0x17a050u;

    // 0x17a050: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x17a050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x17a054: 0x1460fef9  bnez        $v1, . + 4 + (-0x107 << 2)
    ctx->pc = 0x17A054u;
    {
        const bool branch_taken_0x17a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a054) {
            ctx->pc = 0x179C3Cu;
            return;
        }
    }
    ctx->pc = 0x17A05Cu;
    // 0x17a05c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a060: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17a064: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17a064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a068: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17a06c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17a06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a070: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17a074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a078: 0x3e00008  jr          $ra
    ctx->pc = 0x17A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A078u;
        // 0x17a07c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A080u;
}
