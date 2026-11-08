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

// Function: entry_00165664
// Address: 0x165664 - 0x16567c
void entry_00165664_0x165664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165664_0x165664");
#endif

    ctx->pc = 0x165664u;

    // 0x165664: 0x2634821  addu        $t1, $s3, $v1
    ctx->pc = 0x165664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x165668: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x165668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16566c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x16566Cu;
    {
        const bool branch_taken_0x16566c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x165670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16566Cu;
        // 0x165670: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16566c) {
            ctx->pc = 0x16567Cu;
            return;
        }
    }
    ctx->pc = 0x165674u;
    // 0x165674: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x165674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x165678: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x165678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x16567cu;
}
