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

// Function: entry_0016ccec
// Address: 0x16ccec - 0x16cd04
void entry_0016ccec_0x16ccec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ccec_0x16ccec");
#endif

    ctx->pc = 0x16ccecu;

    // 0x16ccec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ccf0: 0x14830045  bne         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x16CCF0u;
    {
        const bool branch_taken_0x16ccf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ccf0) {
            ctx->pc = 0x16CE08u;
            return;
        }
    }
    ctx->pc = 0x16CCF8u;
    // 0x16ccf8: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ccfc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x16CCFCu;
    {
        const bool branch_taken_0x16ccfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCFCu;
        // 0x16cd00: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccfc) {
            ctx->pc = 0x16CE08u;
            return;
        }
    }
    ctx->pc = 0x16CD04u;
}
