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

// Function: entry_002044e0
// Address: 0x2044e0 - 0x20452c
void entry_002044e0_0x2044e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002044e0_0x2044e0");
#endif

    ctx->pc = 0x2044e0u;

    // 0x2044e0: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x2044e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2044e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2044E4u;
    {
        const bool branch_taken_0x2044e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044E4u;
        // 0x2044e8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044e4) {
            ctx->pc = 0x204548u;
            return;
        }
    }
    ctx->pc = 0x2044ECu;
    // 0x2044ec: 0xa3b701c1  sb          $s7, 0x1C1($sp)
    ctx->pc = 0x2044ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
    // 0x2044f0: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x2044f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x2044f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2044f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2044f8: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x2044f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2044fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2044fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204500: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x204500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x204504: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204508: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x204508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20450c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x20450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204510: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x204510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x204514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204518: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x204518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x20451c: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x20451cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204520: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x204520u;
    {
        const bool branch_taken_0x204520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204520u;
        // 0x204524: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204520) {
            ctx->pc = 0x204544u;
            return;
        }
    }
    ctx->pc = 0x204528u;
    // 0x204528: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x20452cu;
}
