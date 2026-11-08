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

// Function: entry_0019d534
// Address: 0x19d534 - 0x19d580
void entry_0019d534_0x19d534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d534_0x19d534");
#endif

    ctx->pc = 0x19d534u;

    // 0x19d534: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19d538: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x19d538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19d53c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d540: 0x8e2707f8  lw          $a3, 0x7F8($s1)
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2040)));
    // 0x19d544: 0x262307f8  addiu       $v1, $s1, 0x7F8
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2040));
    // 0x19d548: 0x8e260838  lw          $a2, 0x838($s1)
    ctx->pc = 0x19d548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x19d54c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x19d54cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x19d550: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x19d550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x19d554: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x19d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x19d558: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19d55c: 0x10c50046  beq         $a2, $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x19D55Cu;
    {
        const bool branch_taken_0x19d55c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x19D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D55Cu;
        // 0x19d560: 0x26320838  addiu       $s2, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d55c) {
            ctx->pc = 0x19D678u;
            return;
        }
    }
    ctx->pc = 0x19D564u;
    // 0x19d564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19d564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d568: 0x10c5002f  beq         $a2, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x19D568u;
    {
        const bool branch_taken_0x19d568 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x19d568) {
            ctx->pc = 0x19D628u;
            return;
        }
    }
    ctx->pc = 0x19D570u;
    // 0x19d570: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D570u;
    {
        const bool branch_taken_0x19d570 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d570) {
            ctx->pc = 0x19D580u;
            return;
        }
    }
    ctx->pc = 0x19D578u;
    // 0x19d578: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x19D578u;
    {
        const bool branch_taken_0x19d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d578) {
            ctx->pc = 0x19D6B8u;
            return;
        }
    }
    ctx->pc = 0x19D580u;
}
