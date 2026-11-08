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

// Function: entry_0011d35c
// Address: 0x11d35c - 0x11d3d0
void entry_0011d35c_0x11d35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d35c_0x11d35c");
#endif

    ctx->pc = 0x11d35cu;

    // 0x11d35c: 0x0  nop
    ctx->pc = 0x11d35cu;
    // NOP
    // 0x11d360: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x11d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x11d364: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x11d364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x11d368: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x11d368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x11d36c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x11d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11d370: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x11d370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d374: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x11D374u;
    {
        const bool branch_taken_0x11d374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d374) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D37Cu;
    // 0x11d37c: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x11d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11d380: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x11d380u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11d384: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x11d384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d388: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x11d388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11d38c: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x11d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x11d390: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x11d390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x11d394: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x11d394u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d398: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x11d398u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x11d39c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x11d39cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x11d3a0: 0x288082a  slt         $at, $s4, $t0
    ctx->pc = 0x11d3a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11d3a4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x11d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11d3a8: 0x101a00a  movz        $s4, $t0, $at
    ctx->pc = 0x11d3a8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 8));
    // 0x11d3ac: 0xa6b021  addu        $s6, $a1, $a2
    ctx->pc = 0x11d3acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11d3b0: 0x8ea50538  lw          $a1, 0x538($s5)
    ctx->pc = 0x11d3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    // 0x11d3b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d3b8: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D3B8u;
    {
        const bool branch_taken_0x11d3b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x11D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3B8u;
        // 0x11d3bc: 0x24170020  addiu       $s7, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3b8) {
            ctx->pc = 0x11D3D0u;
            return;
        }
    }
    ctx->pc = 0x11D3C0u;
    // 0x11d3c0: 0x8e110078  lw          $s1, 0x78($s0)
    ctx->pc = 0x11d3c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d3c4: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x11d3c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d3c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D3C8u;
    {
        const bool branch_taken_0x11d3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3C8u;
        // 0x11d3cc: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3c8) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D3D0u;
}
