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

// Function: caseD_63
// Address: 0x203e3c - 0x203e5c
void caseD_63_0x203e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_63_0x203e3c");
#endif

    ctx->pc = 0x203e3cu;

    // 0x203e3c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x203e3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x203e40: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x203e44: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x203e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203e48: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x203e48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203e4c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x203e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x203e50: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x203e54: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x203E54u;
    {
        const bool branch_taken_0x203e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E54u;
        // 0x203e58: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e54) {
            ctx->pc = 0x20437Cu;
            return;
        }
    }
    ctx->pc = 0x203E5Cu;
}
