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

// Function: entry_001ad3cc
// Address: 0x1ad3cc - 0x1ad3f0
void entry_001ad3cc_0x1ad3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad3cc_0x1ad3cc");
#endif

    ctx->pc = 0x1ad3ccu;

    // 0x1ad3cc: 0xa22006c1  sb          $zero, 0x6C1($s1)
    ctx->pc = 0x1ad3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad3d0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ad3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ad3d4: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ad3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1ad3d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD3D8u;
    {
        const bool branch_taken_0x1ad3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3D8u;
        // 0x1ad3dc: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3d8) {
            ctx->pc = 0x1AD3F0u;
            return;
        }
    }
    ctx->pc = 0x1AD3E0u;
    // 0x1ad3e0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ad3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1ad3e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad3e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD3E8u;
    {
        const bool branch_taken_0x1ad3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3E8u;
        // 0x1ad3ec: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3e8) {
            ctx->pc = 0x1AD3F8u;
            return;
        }
    }
    ctx->pc = 0x1AD3F0u;
}
