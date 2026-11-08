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

// Function: entry_0014146c
// Address: 0x14146c - 0x1414d0
void entry_0014146c_0x14146c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014146c_0x14146c");
#endif

    ctx->pc = 0x14146cu;

    // 0x14146c: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x14146Cu;
    {
        const bool branch_taken_0x14146c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x14146c) {
            ctx->pc = 0x141530u;
            return;
        }
    }
    ctx->pc = 0x141474u;
    // 0x141474: 0x8e4b0008  lw          $t3, 0x8($s2)
    ctx->pc = 0x141474u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x141478: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x141478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14147c: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x14147cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141480: 0x27a90200  addiu       $t1, $sp, 0x200
    ctx->pc = 0x141480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x141484: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x141484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141488: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x141488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14148c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x14148cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141490: 0x27a50208  addiu       $a1, $sp, 0x208
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x141494: 0x27a40204  addiu       $a0, $sp, 0x204
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x141498: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x141498u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x14149c: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x14149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1414a0: 0xafb20130  sw          $s2, 0x130($sp)
    ctx->pc = 0x1414a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 18));
    // 0x1414a4: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x1414a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x1414a8: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x1414a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x1414ac: 0xdd460000  ld          $a2, 0x0($t2)
    ctx->pc = 0x1414acu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1414b0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x1414b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1414b4: 0xfd260000  sd          $a2, 0x0($t1)
    ctx->pc = 0x1414b4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 6));
    // 0x1414b8: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1414b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1414bc: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x1414bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1414c0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1414c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1414c4: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1414c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1414c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1414C8u;
    {
        const bool branch_taken_0x1414c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414C8u;
        // 0x1414cc: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414c8) {
            ctx->pc = 0x14151Cu;
            return;
        }
    }
    ctx->pc = 0x1414D0u;
}
