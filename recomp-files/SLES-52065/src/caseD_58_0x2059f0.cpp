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

// Function: caseD_58
// Address: 0x2059f0 - 0x205a0c
void caseD_58_0x2059f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_58_0x2059f0");
#endif

    ctx->pc = 0x2059f0u;

    // 0x2059f0: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x2059f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
    // 0x2059f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2059F4u;
    {
        const bool branch_taken_0x2059f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059F4u;
        // 0x2059f8: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059f4) {
            ctx->pc = 0x205A54u;
            return;
        }
    }
    ctx->pc = 0x2059FCu;
    // 0x2059fc: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2059FCu;
    {
        const bool branch_taken_0x2059fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x205A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059FCu;
        // 0x205a00: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059fc) {
            ctx->pc = 0x205A54u;
            return;
        }
    }
    ctx->pc = 0x205A04u;
    // 0x205a04: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x205a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x205a08: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x205a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    ctx->pc = 0x205a0cu;
}
