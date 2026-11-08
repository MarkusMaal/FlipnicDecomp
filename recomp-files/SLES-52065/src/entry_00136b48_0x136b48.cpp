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

// Function: entry_00136b48
// Address: 0x136b48 - 0x136b78
void entry_00136b48_0x136b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b48_0x136b48");
#endif

    ctx->pc = 0x136b48u;

    // 0x136b48: 0xc7808568  lwc1        $f0, -0x7A98($gp)
    ctx->pc = 0x136b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136b4c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x136b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x136b50: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x136b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x136b54: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x136b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x136b58: 0x83828574  lb          $v0, -0x7A8C($gp)
    ctx->pc = 0x136b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x136b5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136B5Cu;
    {
        const bool branch_taken_0x136b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B5Cu;
        // 0x136b60: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b5c) {
            ctx->pc = 0x136B78u;
            return;
        }
    }
    ctx->pc = 0x136B64u;
    // 0x136b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136b68: 0x3c033f84  lui         $v1, 0x3F84
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
    // 0x136b6c: 0xa3828574  sb          $v0, -0x7A8C($gp)
    ctx->pc = 0x136b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935924), (uint8_t)GPR_U32(ctx, 2));
    // 0x136b70: 0x34627ae1  ori         $v0, $v1, 0x7AE1
    ctx->pc = 0x136b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
    // 0x136b74: 0xaf828570  sw          $v0, -0x7A90($gp)
    ctx->pc = 0x136b74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935920), GPR_U32(ctx, 2));
    ctx->pc = 0x136b78u;
}
