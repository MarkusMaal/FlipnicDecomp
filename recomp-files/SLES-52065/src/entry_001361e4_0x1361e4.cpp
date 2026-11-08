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

// Function: entry_001361e4
// Address: 0x1361e4 - 0x13621c
void entry_001361e4_0x1361e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001361e4_0x1361e4");
#endif

    ctx->pc = 0x1361e4u;

    // 0x1361e4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1361e8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1361e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1361ec: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x1361ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1361f0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1361f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1361f4: 0x1420005d  bnez        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x1361F4u;
    {
        const bool branch_taken_0x1361f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1361f4) {
            ctx->pc = 0x13636Cu;
            return;
        }
    }
    ctx->pc = 0x1361FCu;
    // 0x1361fc: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1361fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x136200: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136204: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136208: 0x742023  subu        $a0, $v1, $s4
    ctx->pc = 0x136208u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x13620c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13620Cu;
    {
        const bool branch_taken_0x13620c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x136210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13620Cu;
        // 0x136210: 0x43083  sra         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13620c) {
            ctx->pc = 0x13621Cu;
            return;
        }
    }
    ctx->pc = 0x136214u;
    // 0x136214: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x136214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x136218: 0x43083  sra         $a2, $a0, 2
    ctx->pc = 0x136218u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 2));
    ctx->pc = 0x13621cu;
}
