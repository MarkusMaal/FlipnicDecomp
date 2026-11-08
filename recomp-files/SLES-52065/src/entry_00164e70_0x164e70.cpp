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

// Function: entry_00164e70
// Address: 0x164e70 - 0x164e88
void entry_00164e70_0x164e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e70_0x164e70");
#endif

    ctx->pc = 0x164e70u;

    // 0x164e70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x164e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164e74: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164E74u;
    {
        const bool branch_taken_0x164e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E74u;
        // 0x164e78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e74) {
            ctx->pc = 0x164E88u;
            return;
        }
    }
    ctx->pc = 0x164E7Cu;
    // 0x164e7c: 0xc6600354  lwc1        $f0, 0x354($s3)
    ctx->pc = 0x164e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164E80u;
    {
        const bool branch_taken_0x164e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E80u;
        // 0x164e84: 0xe66002f0  swc1        $f0, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e80) {
            ctx->pc = 0x164EACu;
            return;
        }
    }
    ctx->pc = 0x164E88u;
}
