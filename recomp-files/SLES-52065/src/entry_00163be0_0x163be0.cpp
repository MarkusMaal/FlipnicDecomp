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

// Function: entry_00163be0
// Address: 0x163be0 - 0x163bf8
void entry_00163be0_0x163be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163be0_0x163be0");
#endif

    ctx->pc = 0x163be0u;

    // 0x163be0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x163be4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163BE4u;
    {
        const bool branch_taken_0x163be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BE4u;
        // 0x163be8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163be4) {
            ctx->pc = 0x163BF8u;
            return;
        }
    }
    ctx->pc = 0x163BECu;
    // 0x163bec: 0xc6600354  lwc1        $f0, 0x354($s3)
    ctx->pc = 0x163becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163bf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163BF0u;
    {
        const bool branch_taken_0x163bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BF0u;
        // 0x163bf4: 0xe66002f0  swc1        $f0, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bf0) {
            ctx->pc = 0x163C1Cu;
            return;
        }
    }
    ctx->pc = 0x163BF8u;
}
