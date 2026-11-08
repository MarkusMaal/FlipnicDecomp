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

// Function: entry_0017a4a0
// Address: 0x17a4a0 - 0x17a4c8
void entry_0017a4a0_0x17a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a4a0_0x17a4a0");
#endif

    ctx->pc = 0x17a4a0u;

    // 0x17a4a0: 0xc46401c0  lwc1        $f4, 0x1C0($v1)
    ctx->pc = 0x17a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17a4a4: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x17a4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
    // 0x17a4a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17a4ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a4b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17a4b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a4b4: 0x248476c0  addiu       $a0, $a0, 0x76C0
    ctx->pc = 0x17a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30400));
    // 0x17a4b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17a4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17a4bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17a4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a4c0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x17A4C0u;
    {
        const bool branch_taken_0x17a4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4C0u;
        // 0x17a4c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4c0) {
            ctx->pc = 0x17A5BCu;
            return;
        }
    }
    ctx->pc = 0x17A4C8u;
}
