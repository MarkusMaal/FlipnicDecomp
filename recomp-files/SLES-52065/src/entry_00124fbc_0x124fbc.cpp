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

// Function: entry_00124fbc
// Address: 0x124fbc - 0x124fdc
void entry_00124fbc_0x124fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124fbc_0x124fbc");
#endif

    ctx->pc = 0x124fbcu;

    // 0x124fbc: 0x0  nop
    ctx->pc = 0x124fbcu;
    // NOP
    // 0x124fc0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x124fc4: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124FC4u;
    {
        const bool branch_taken_0x124fc4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x124fc4) {
            ctx->pc = 0x124FDCu;
            return;
        }
    }
    ctx->pc = 0x124FCCu;
    // 0x124fcc: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x124fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x124fd0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x124fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124fd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x124FD4u;
    {
        const bool branch_taken_0x124fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FD4u;
        // 0x124fd8: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fd4) {
            ctx->pc = 0x124FECu;
            return;
        }
    }
    ctx->pc = 0x124FDCu;
}
