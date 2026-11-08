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

// Function: entry_001faf40
// Address: 0x1faf40 - 0x1faf58
void entry_001faf40_0x1faf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faf40_0x1faf40");
#endif

    ctx->pc = 0x1faf40u;

    // 0x1faf40: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1faf40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1faf44: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1faf44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1faf48: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FAF48u;
    {
        const bool branch_taken_0x1faf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF48u;
        // 0x1faf4c: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf48) {
            ctx->pc = 0x1FAF80u;
            return;
        }
    }
    ctx->pc = 0x1FAF50u;
    // 0x1faf50: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1faf50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1faf54: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1faf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x1faf58u;
}
