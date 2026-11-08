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

// Function: entry_0017e0f4
// Address: 0x17e0f4 - 0x17e134
void entry_0017e0f4_0x17e0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e0f4_0x17e0f4");
#endif

    ctx->pc = 0x17e0f4u;

    // 0x17e0f4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17e0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17e0f8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x17e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17e0fc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17e0fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17e100: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17e100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17e104: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17e104u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e108: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17e10c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17e10cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e110: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e114: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17e114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e118: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17e118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e11c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17e11cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e120: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17e120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e128: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e12c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E12Cu;
        // 0x17e130: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E134u;
}
