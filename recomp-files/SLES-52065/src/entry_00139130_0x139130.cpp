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

// Function: entry_00139130
// Address: 0x139130 - 0x1391a8
void entry_00139130_0x139130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139130_0x139130");
#endif

    ctx->pc = 0x139130u;

    // 0x139130: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x139134: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x139134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x139138: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x139138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13913c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13913Cu;
    {
        const bool branch_taken_0x13913c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13913c) {
            ctx->pc = 0x1391A8u;
            return;
        }
    }
    ctx->pc = 0x139144u;
    // 0x139144: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x139144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139148: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x139148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x13914c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x13914cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x139150: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x139150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x139154: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x139154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x139158: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x139158u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13915c: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x13915cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x139160: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x139160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x139164: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x139164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139168: 0xaa5821  addu        $t3, $a1, $t2
    ctx->pc = 0x139168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x13916c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x13916cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x139170: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x139170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139174: 0x34ca0104  ori         $t2, $a2, 0x104
    ctx->pc = 0x139174u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)260);
    // 0x139178: 0x3c056e00  lui         $a1, 0x6E00
    ctx->pc = 0x139178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28160 << 16));
    // 0x13917c: 0xac8b0004  sw          $t3, 0x4($a0)
    ctx->pc = 0x13917cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 11));
    // 0x139180: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x139180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x139184: 0x33480  sll         $a2, $v1, 18
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
    // 0x139188: 0x34a5c022  ori         $a1, $a1, 0xC022
    ctx->pc = 0x139188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49186);
    // 0x13918c: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x13918cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x139190: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x139190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x139194: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x139194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x139198: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13919c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1391a0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1391A0u;
    {
        const bool branch_taken_0x1391a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391A0u;
        // 0x1391a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391a0) {
            ctx->pc = 0x13927Cu;
            return;
        }
    }
    ctx->pc = 0x1391A8u;
}
