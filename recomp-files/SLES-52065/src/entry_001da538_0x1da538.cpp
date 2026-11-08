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

// Function: entry_001da538
// Address: 0x1da538 - 0x1da5c0
void entry_001da538_0x1da538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da538_0x1da538");
#endif

    ctx->pc = 0x1da538u;

    // 0x1da538: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1da538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da53c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1da53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da540: 0x8ce60048  lw          $a2, 0x48($a3)
    ctx->pc = 0x1da540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x1da544: 0x14c2002a  bne         $a2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DA544u;
    {
        const bool branch_taken_0x1da544 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA544u;
        // 0x1da548: 0x24e50040  addiu       $a1, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da544) {
            ctx->pc = 0x1DA5F0u;
            return;
        }
    }
    ctx->pc = 0x1DA54Cu;
    // 0x1da54c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1da54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da550: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1da554: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x1da554u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da55c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1da55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1da560: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da564: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x1da564u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da568: 0x15040021  bne         $t0, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DA568u;
    {
        const bool branch_taken_0x1da568 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA568u;
        // 0x1da56c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da568) {
            ctx->pc = 0x1DA5F0u;
            return;
        }
    }
    ctx->pc = 0x1DA570u;
    // 0x1da570: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1da570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1da574: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1da574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1da578: 0x244471d4  addiu       $a0, $v0, 0x71D4
    ctx->pc = 0x1da578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29140));
    // 0x1da57c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da580: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1da584: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x1da584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1da588: 0x1046000d  beq         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA588u;
    {
        const bool branch_taken_0x1da588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1DA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA588u;
        // 0x1da58c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da588) {
            ctx->pc = 0x1DA5C0u;
            return;
        }
    }
    ctx->pc = 0x1DA590u;
    // 0x1da590: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1da590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1da594: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1da594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1da598: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1da59c: 0x24a371d0  addiu       $v1, $a1, 0x71D0
    ctx->pc = 0x1da59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 29136));
    // 0x1da5a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1da5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D0u));
    // 0x1da5a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1da5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1da5a8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1da5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1da5ac: 0xa02670d0  sb          $a2, 0x70D0($at)
    ctx->pc = 0x1da5acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 28880), (uint8_t)GPR_U32(ctx, 6));
    // 0x1da5b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da5b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA5B4u;
    {
        const bool branch_taken_0x1da5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5B4u;
        // 0x1da5b8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5b4) {
            ctx->pc = 0x1DA5C8u;
            return;
        }
    }
    ctx->pc = 0x1DA5BCu;
    // 0x1da5bc: 0x0  nop
    ctx->pc = 0x1da5bcu;
    // NOP
    ctx->pc = 0x1da5c0u;
}
