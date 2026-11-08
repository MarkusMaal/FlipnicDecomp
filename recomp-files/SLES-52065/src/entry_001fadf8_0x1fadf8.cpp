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

// Function: entry_001fadf8
// Address: 0x1fadf8 - 0x1fae10
void entry_001fadf8_0x1fadf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fadf8_0x1fadf8");
#endif

    ctx->pc = 0x1fadf8u;

    // 0x1fadf8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fadf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fadfc: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1FADFCu;
    {
        const bool branch_taken_0x1fadfc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1FAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADFCu;
        // 0x1fae00: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadfc) {
            ctx->pc = 0x1FAE34u;
            return;
        }
    }
    ctx->pc = 0x1FAE04u;
    // 0x1fae04: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1fae04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fae08: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x1fae08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fae0c: 0x0  nop
    ctx->pc = 0x1fae0cu;
    // NOP
    ctx->pc = 0x1fae10u;
}
