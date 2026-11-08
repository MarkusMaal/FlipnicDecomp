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

// Function: entry_00189424
// Address: 0x189424 - 0x189478
void entry_00189424_0x189424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189424_0x189424");
#endif

    ctx->pc = 0x189424u;

label_189424:
    // 0x189424: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x189424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x189428: 0x2064021  addu        $t0, $s0, $a2
    ctx->pc = 0x189428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x18942c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x18942cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189430: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x189430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x189434: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x189434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x189438: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x189438u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18943c: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x18943cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x189440: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x189440u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x189444: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x189444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x189448: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x189448u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18944c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x18944cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x189450: 0xa1030003  sb          $v1, 0x3($t0)
    ctx->pc = 0x189450u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x189454: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x189454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x189458: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x189458u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x18945c: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x18945cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x189460: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x189460u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x189464: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x189464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x189468: 0xa1030006  sb          $v1, 0x6($t0)
    ctx->pc = 0x189468u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x18946c: 0x90e30007  lbu         $v1, 0x7($a3)
    ctx->pc = 0x18946cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x189470: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x189470u;
    {
        const bool branch_taken_0x189470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189470u;
        // 0x189474: 0xa1030007  sb          $v1, 0x7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189470) {
            ctx->pc = 0x189424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189424;
        }
    }
    ctx->pc = 0x189478u;
}
