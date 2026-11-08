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

// Function: entry_0020231c
// Address: 0x20231c - 0x202350
void entry_0020231c_0x20231c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020231c_0x20231c");
#endif

    ctx->pc = 0x20231cu;

    // 0x20231c: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x20231cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x202320: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x202320u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x202324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202328: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x202328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x20232c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20232cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202330: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x202330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x202334: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x202334u;
    {
        const bool branch_taken_0x202334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202334u;
        // 0x202338: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202334) {
            ctx->pc = 0x2023A8u;
            return;
        }
    }
    ctx->pc = 0x20233Cu;
    // 0x20233c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x20233cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x202340: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x202340u;
    {
        const bool branch_taken_0x202340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202340u;
        // 0x202344: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202340) {
            ctx->pc = 0x2023ACu;
            return;
        }
    }
    ctx->pc = 0x202348u;
    // 0x202348: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x202348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20234c: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x20234cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    ctx->pc = 0x202350u;
}
