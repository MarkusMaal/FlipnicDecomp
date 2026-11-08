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

// Function: entry_0016ae08
// Address: 0x16ae08 - 0x16ae30
void entry_0016ae08_0x16ae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae08_0x16ae08");
#endif

    ctx->pc = 0x16ae08u;

    // 0x16ae08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ae0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ae10: 0xc476004c  lwc1        $f22, 0x4C($v1)
    ctx->pc = 0x16ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16ae14: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16AE14u;
    {
        const bool branch_taken_0x16ae14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE14u;
        // 0x16ae18: 0xc4750054  lwc1        $f21, 0x54($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae14) {
            ctx->pc = 0x16AE54u;
            return;
        }
    }
    ctx->pc = 0x16AE1Cu;
    // 0x16ae1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ae20: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AE20u;
    {
        const bool branch_taken_0x16ae20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE20u;
        // 0x16ae24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae20) {
            ctx->pc = 0x16AE30u;
            return;
        }
    }
    ctx->pc = 0x16AE28u;
    // 0x16ae28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16AE28u;
    {
        const bool branch_taken_0x16ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE28u;
        // 0x16ae2c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae28) {
            ctx->pc = 0x16AE64u;
            return;
        }
    }
    ctx->pc = 0x16AE30u;
}
