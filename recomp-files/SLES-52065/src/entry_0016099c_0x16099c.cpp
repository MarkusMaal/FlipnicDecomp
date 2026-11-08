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

// Function: entry_0016099c
// Address: 0x16099c - 0x160a2c
void entry_0016099c_0x16099c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016099c_0x16099c");
#endif

    ctx->pc = 0x16099cu;

label_16099c:
    // 0x16099c: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x16099cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1609a4: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x1609a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1609a8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609ac: 0x90e40041  lbu         $a0, 0x41($a3)
    ctx->pc = 0x1609acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 65)));
    // 0x1609b0: 0xa0e40042  sb          $a0, 0x42($a3)
    ctx->pc = 0x1609b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 66), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609b4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609b8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609bc: 0x90e40091  lbu         $a0, 0x91($a3)
    ctx->pc = 0x1609bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 145)));
    // 0x1609c0: 0xa0e40092  sb          $a0, 0x92($a3)
    ctx->pc = 0x1609c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 146), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609c4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609c8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609cc: 0x90e400e1  lbu         $a0, 0xE1($a3)
    ctx->pc = 0x1609ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 225)));
    // 0x1609d0: 0xa0e400e2  sb          $a0, 0xE2($a3)
    ctx->pc = 0x1609d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 226), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609d4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609d8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609dc: 0x90e40131  lbu         $a0, 0x131($a3)
    ctx->pc = 0x1609dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 305)));
    // 0x1609e0: 0xa0e40132  sb          $a0, 0x132($a3)
    ctx->pc = 0x1609e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 306), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609e4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609e8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609ec: 0x90e40181  lbu         $a0, 0x181($a3)
    ctx->pc = 0x1609ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 385)));
    // 0x1609f0: 0xa0e40182  sb          $a0, 0x182($a3)
    ctx->pc = 0x1609f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 386), (uint8_t)GPR_U32(ctx, 4));
    // 0x1609f4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1609f8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1609f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1609fc: 0x90e401d1  lbu         $a0, 0x1D1($a3)
    ctx->pc = 0x1609fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 465)));
    // 0x160a00: 0xa0e401d2  sb          $a0, 0x1D2($a3)
    ctx->pc = 0x160a00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 466), (uint8_t)GPR_U32(ctx, 4));
    // 0x160a04: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a08: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x160a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160a0c: 0x90e40221  lbu         $a0, 0x221($a3)
    ctx->pc = 0x160a0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 545)));
    // 0x160a10: 0xa0e40222  sb          $a0, 0x222($a3)
    ctx->pc = 0x160a10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 546), (uint8_t)GPR_U32(ctx, 4));
    // 0x160a14: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a18: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x160a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160a1c: 0x90e40271  lbu         $a0, 0x271($a3)
    ctx->pc = 0x160a1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 625)));
    // 0x160a20: 0x24c60280  addiu       $a2, $a2, 0x280
    ctx->pc = 0x160a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
    // 0x160a24: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x160A24u;
    {
        const bool branch_taken_0x160a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A24u;
        // 0x160a28: 0xa0e40272  sb          $a0, 0x272($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 626), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a24) {
            ctx->pc = 0x16099Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16099c;
        }
    }
    ctx->pc = 0x160A2Cu;
}
