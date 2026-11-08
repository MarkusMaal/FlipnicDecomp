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

// Function: entry_00188f4c
// Address: 0x188f4c - 0x188fa0
void entry_00188f4c_0x188f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188f4c_0x188f4c");
#endif

    ctx->pc = 0x188f4cu;

label_188f4c:
    // 0x188f4c: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x188f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x188f50: 0x2264021  addu        $t0, $s1, $a2
    ctx->pc = 0x188f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x188f54: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x188f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x188f58: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x188f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x188f5c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x188f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x188f60: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x188f60u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f64: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x188f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x188f68: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x188f68u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f6c: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x188f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x188f70: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x188f70u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f74: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x188f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x188f78: 0xa1030003  sb          $v1, 0x3($t0)
    ctx->pc = 0x188f78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f7c: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x188f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x188f80: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x188f80u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f84: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x188f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x188f88: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x188f88u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f8c: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x188f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x188f90: 0xa1030006  sb          $v1, 0x6($t0)
    ctx->pc = 0x188f90u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f94: 0x90e30007  lbu         $v1, 0x7($a3)
    ctx->pc = 0x188f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x188f98: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x188F98u;
    {
        const bool branch_taken_0x188f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F98u;
        // 0x188f9c: 0xa1030007  sb          $v1, 0x7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f98) {
            ctx->pc = 0x188F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188f4c;
        }
    }
    ctx->pc = 0x188FA0u;
}
