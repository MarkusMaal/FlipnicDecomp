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

// Function: entry_002004f8
// Address: 0x2004f8 - 0x200550
void entry_002004f8_0x2004f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002004f8_0x2004f8");
#endif

    ctx->pc = 0x2004f8u;

label_2004f8:
    // 0x2004f8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2004f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2004fc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2004fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x200500: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x200504: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x200504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x200508: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x200508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x20050c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x20050cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x200510: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x200510u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x200514: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x200514u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200518: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x200518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x20051c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x20051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x200520: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x200520u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x200524: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x200524u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x200528: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x200528u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20052c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x20052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x200530: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x200530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x200534: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x200534u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x200538: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20053c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x20053Cu;
    {
        const bool branch_taken_0x20053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20053Cu;
        // 0x200540: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20053c) {
            ctx->pc = 0x2004F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2004f8;
        }
    }
    ctx->pc = 0x200544u;
    // 0x200544: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x200544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x200548: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x200548u;
    {
        const bool branch_taken_0x200548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200548) {
            ctx->pc = 0x20054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200548u;
            // 0x20054c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200588u;
            return;
        }
    }
    ctx->pc = 0x200550u;
}
