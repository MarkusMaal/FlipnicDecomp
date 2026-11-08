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

// Function: entry_00207508
// Address: 0x207508 - 0x207550
void entry_00207508_0x207508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207508_0x207508");
#endif

    ctx->pc = 0x207508u;

    // 0x207508: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x207508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20750c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x20750cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x207510: 0x24425a00  addiu       $v0, $v0, 0x5A00
    ctx->pc = 0x207510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
    // 0x207514: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x207514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207518: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20751c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20751cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207520: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207524: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x207524u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x207528: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x207528u;
    {
        const bool branch_taken_0x207528 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x207528) {
            ctx->pc = 0x20752Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207528u;
            // 0x20752c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207550u;
            return;
        }
    }
    ctx->pc = 0x207530u;
    // 0x207530: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x207530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x207534: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x207534u;
    {
        const bool branch_taken_0x207534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207534u;
        // 0x207538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207534) {
            ctx->pc = 0x207688u;
            return;
        }
    }
    ctx->pc = 0x20753Cu;
    // 0x20753c: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x20753cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207540: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x207540u;
    {
        const bool branch_taken_0x207540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207540u;
        // 0x207544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207540) {
            ctx->pc = 0x207688u;
            return;
        }
    }
    ctx->pc = 0x207548u;
    // 0x207548: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x207548u;
    {
        const bool branch_taken_0x207548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207548u;
        // 0x20754c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207548) {
            ctx->pc = 0x207688u;
            return;
        }
    }
    ctx->pc = 0x207550u;
}
