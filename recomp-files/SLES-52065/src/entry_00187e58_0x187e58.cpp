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

// Function: entry_00187e58
// Address: 0x187e58 - 0x187e80
void entry_00187e58_0x187e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e58_0x187e58");
#endif

    ctx->pc = 0x187e58u;

    // 0x187e58: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x187e58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187e5c: 0x1480ff14  bnez        $a0, . + 4 + (-0xEC << 2)
    ctx->pc = 0x187E5Cu;
    {
        const bool branch_taken_0x187e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E5Cu;
        // 0x187e60: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e5c) {
            ctx->pc = 0x187AB0u;
            return;
        }
    }
    ctx->pc = 0x187E64u;
    // 0x187e64: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x187e68: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x187e68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x187e6c: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x187e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x187e70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187E70u;
    {
        const bool branch_taken_0x187e70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x187E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E70u;
        // 0x187e74: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e70) {
            ctx->pc = 0x187E80u;
            return;
        }
    }
    ctx->pc = 0x187E78u;
    // 0x187e78: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x187e7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x187e80u;
}
