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

// Function: FUN_0011d1b0
// Address: 0x11d1b0 - 0x11d5d4
void FUN_0011d1b0_0x11d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011d1b0_0x11d1b0");
#endif

    switch (ctx->pc) {
        case 0x11d1e4u: goto label_11d1e4;
        case 0x11d3f0u: goto label_11d3f0;
        case 0x11d42cu: goto label_11d42c;
        case 0x11d464u: goto label_11d464;
        case 0x11d4dcu: goto label_11d4dc;
        case 0x11d520u: goto label_11d520;
        case 0x11d534u: goto label_11d534;
        case 0x11d544u: goto label_11d544;
        case 0x11d554u: goto label_11d554;
        case 0x11d564u: goto label_11d564;
        case 0x11d574u: goto label_11d574;
        case 0x11d584u: goto label_11d584;
        default: break;
    }

    ctx->pc = 0x11d1b0u;

    // 0x11d1b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11d1b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11d1b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x11d1bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x11d1c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11d1c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11d1c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11d1c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11d1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11d1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11d1d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11d1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11d1dc: 0x8c900100  lw          $s0, 0x100($a0)
    ctx->pc = 0x11d1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x11d1e0: 0x0  nop
    ctx->pc = 0x11d1e0u;
    // NOP
label_11d1e4:
    // 0x11d1e4: 0x120000f0  beqz        $s0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x11D1E4u;
    {
        const bool branch_taken_0x11d1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1e4) {
            ctx->pc = 0x11D5A8u;
            goto label_11d5a8;
        }
    }
    ctx->pc = 0x11D1ECu;
    // 0x11d1ec: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x11d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11d1f0: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x11d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x11d1f4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x11d1f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11d1f8: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x11D1F8u;
    {
        const bool branch_taken_0x11d1f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1F8u;
        // 0x11d1fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1f8) {
            ctx->pc = 0x11D3E8u;
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D200u;
    // 0x11d200: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x11d200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11d204: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d208: 0x10a40054  beq         $a1, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x11D208u;
    {
        const bool branch_taken_0x11d208 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11d208) {
            ctx->pc = 0x11D35Cu;
            goto label_11d35c;
        }
    }
    ctx->pc = 0x11D210u;
    // 0x11d210: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d214: 0x10a4002b  beq         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11D214u;
    {
        const bool branch_taken_0x11d214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11d214) {
            ctx->pc = 0x11D2C4u;
            goto label_11d2c4;
        }
    }
    ctx->pc = 0x11D21Cu;
    // 0x11d21c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d220: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D220u;
    {
        const bool branch_taken_0x11d220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11d220) {
            ctx->pc = 0x11D230u;
            goto label_11d230;
        }
    }
    ctx->pc = 0x11D228u;
    // 0x11d228: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11D228u;
    {
        const bool branch_taken_0x11d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d228) {
            ctx->pc = 0x11D3E8u;
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D230u;
label_11d230:
    // 0x11d230: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x11d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x11d234: 0x3c01000c  lui         $at, 0xC
    ctx->pc = 0x11d234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12 << 16));
    // 0x11d238: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x11d238u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11d23c: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x11d23cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d240: 0x10200069  beqz        $at, . + 4 + (0x69 << 2)
    ctx->pc = 0x11D240u;
    {
        const bool branch_taken_0x11d240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d240) {
            ctx->pc = 0x11D3E8u;
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D248u;
    // 0x11d248: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x11d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11d24c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11d24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11d250: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x11d250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d254: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x11d254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11d258: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x11d258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x11d25c: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x11d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x11d260: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x11d260u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d264: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x11d264u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x11d268: 0x634c0  sll         $a2, $a2, 19
    ctx->pc = 0x11d268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
    // 0x11d26c: 0x281082a  slt         $at, $s4, $at
    ctx->pc = 0x11d26cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d270: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x11d270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11d274: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D274u;
    {
        const bool branch_taken_0x11d274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D274u;
        // 0x11d278: 0xa6b021  addu        $s6, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d274) {
            ctx->pc = 0x11D284u;
            goto label_11d284;
        }
    }
    ctx->pc = 0x11D27Cu;
    // 0x11d27c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D27Cu;
    {
        const bool branch_taken_0x11d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D27Cu;
        // 0x11d280: 0x8ea50538  lw          $a1, 0x538($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d27c) {
            ctx->pc = 0x11D28Cu;
            goto label_11d28c;
        }
    }
    ctx->pc = 0x11D284u;
label_11d284:
    // 0x11d284: 0x3c140004  lui         $s4, 0x4
    ctx->pc = 0x11d284u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4 << 16));
    // 0x11d288: 0x8ea50538  lw          $a1, 0x538($s5)
    ctx->pc = 0x11d288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
label_11d28c:
    // 0x11d28c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d290: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D290u;
    {
        const bool branch_taken_0x11d290 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x11D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D290u;
        // 0x11d294: 0x24170100  addiu       $s7, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d290) {
            ctx->pc = 0x11D2A8u;
            goto label_11d2a8;
        }
    }
    ctx->pc = 0x11D298u;
    // 0x11d298: 0x8e110078  lw          $s1, 0x78($s0)
    ctx->pc = 0x11d298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d29c: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x11d29cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d2a0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x11D2A0u;
    {
        const bool branch_taken_0x11d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2A0u;
        // 0x11d2a4: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2a0) {
            ctx->pc = 0x11D3E8u;
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D2A8u;
label_11d2a8:
    // 0x11d2a8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x11d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d2ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d2b0: 0x8eb10530  lw          $s1, 0x530($s5)
    ctx->pc = 0x11d2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11d2b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d2b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d2b8: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x11d2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x11d2bc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x11D2BCu;
    {
        const bool branch_taken_0x11d2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2BCu;
        // 0x11d2c0: 0x64902d  daddu       $s2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2bc) {
            ctx->pc = 0x11D3E8u;
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D2C4u;
label_11d2c4:
    // 0x11d2c4: 0x0  nop
    ctx->pc = 0x11d2c4u;
    // NOP
    // 0x11d2c8: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x11d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x11d2cc: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x11d2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x11d2d0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x11d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11d2d4: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x11d2d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d2d8: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x11D2D8u;
    {
        const bool branch_taken_0x11d2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d2d8) {
            ctx->pc = 0x11D3E8u;
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D2E0u;
    // 0x11d2e0: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x11d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11d2e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x11d2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x11d2e8: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x11d2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d2ec: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x11d2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11d2f0: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x11d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x11d2f4: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x11d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x11d2f8: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x11d2f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d2fc: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x11d2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x11d300: 0x63480  sll         $a2, $a2, 18
    ctx->pc = 0x11d300u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 18));
    // 0x11d304: 0x281082a  slt         $at, $s4, $at
    ctx->pc = 0x11d304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d308: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x11d308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11d30c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D30Cu;
    {
        const bool branch_taken_0x11d30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D30Cu;
        // 0x11d310: 0xa6b021  addu        $s6, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d30c) {
            ctx->pc = 0x11D31Cu;
            goto label_11d31c;
        }
    }
    ctx->pc = 0x11D314u;
    // 0x11d314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D314u;
    {
        const bool branch_taken_0x11d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D314u;
        // 0x11d318: 0x8ea50538  lw          $a1, 0x538($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d314) {
            ctx->pc = 0x11D324u;
            goto label_11d324;
        }
    }
    ctx->pc = 0x11D31Cu;
label_11d31c:
    // 0x11d31c: 0x3c140002  lui         $s4, 0x2
    ctx->pc = 0x11d31cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2 << 16));
    // 0x11d320: 0x8ea50538  lw          $a1, 0x538($s5)
    ctx->pc = 0x11d320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
label_11d324:
    // 0x11d324: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d328: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D328u;
    {
        const bool branch_taken_0x11d328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x11D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D328u;
        // 0x11d32c: 0x24170080  addiu       $s7, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d328) {
            ctx->pc = 0x11D340u;
            goto label_11d340;
        }
    }
    ctx->pc = 0x11D330u;
    // 0x11d330: 0x8e110078  lw          $s1, 0x78($s0)
    ctx->pc = 0x11d330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d334: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x11d334u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d338: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11D338u;
    {
        const bool branch_taken_0x11d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D338u;
        // 0x11d33c: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d338) {
            ctx->pc = 0x11D3E8u;
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D340u;
label_11d340:
    // 0x11d340: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x11d340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d344: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d348: 0x8eb10530  lw          $s1, 0x530($s5)
    ctx->pc = 0x11d348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11d34c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d34cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d350: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x11d350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x11d354: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11D354u;
    {
        const bool branch_taken_0x11d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D354u;
        // 0x11d358: 0x64902d  daddu       $s2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d354) {
            ctx->pc = 0x11D3E8u;
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D35Cu;
label_11d35c:
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
            goto label_11d3e8;
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
            goto label_11d3d0;
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
            goto label_11d3e8;
        }
    }
    ctx->pc = 0x11D3D0u;
label_11d3d0:
    // 0x11d3d0: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x11d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x11d3d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d3d8: 0x8eb10530  lw          $s1, 0x530($s5)
    ctx->pc = 0x11d3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11d3dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d3dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d3e0: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x11d3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x11d3e4: 0x64902d  daddu       $s2, $v1, $a0
    ctx->pc = 0x11d3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_11d3e8:
    // 0x11d3e8: 0x12800036  beqz        $s4, . + 4 + (0x36 << 2)
    ctx->pc = 0x11D3E8u;
    {
        const bool branch_taken_0x11d3e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3e8) {
            ctx->pc = 0x11D4C4u;
            goto label_11d4c4;
        }
    }
    ctx->pc = 0x11D3F0u;
label_11d3f0:
    // 0x11d3f0: 0x8f8283f0  lw          $v0, -0x7C10($gp)
    ctx->pc = 0x11d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x11d3f4: 0x1040fffe  beqz        $v0, . + 4 + (-0x2 << 2)
    ctx->pc = 0x11D3F4u;
    {
        const bool branch_taken_0x11d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3f4) {
            ctx->pc = 0x11D3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d3f0;
        }
    }
    ctx->pc = 0x11D3FCu;
    // 0x11d3fc: 0x8f8283e0  lw          $v0, -0x7C20($gp)
    ctx->pc = 0x11d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935520)));
    // 0x11d400: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D400u;
    {
        const bool branch_taken_0x11d400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x11D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D400u;
        // 0x11d404: 0xaf8083f0  sw          $zero, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d400) {
            ctx->pc = 0x11D414u;
            goto label_11d414;
        }
    }
    ctx->pc = 0x11D408u;
    // 0x11d408: 0xdf8283e8  ld          $v0, -0x7C18($gp)
    ctx->pc = 0x11d408u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935528)));
    // 0x11d40c: 0x1052000d  beq         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x11D40Cu;
    {
        const bool branch_taken_0x11d40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x11d40c) {
            ctx->pc = 0x11D444u;
            goto label_11d444;
        }
    }
    ctx->pc = 0x11D414u;
label_11d414:
    // 0x11d414: 0x0  nop
    ctx->pc = 0x11d414u;
    // NOP
    // 0x11d418: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x11d418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x11d41c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11d41cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11d420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d424: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11D424u;
    SET_GPR_U32(ctx, 31, 0x11D42Cu);
    ctx->pc = 0x11D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D424u;
    // 0x11d428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11D424u, 0x11D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D42Cu;
label_11d42c:
    // 0x11d42c: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x11d42cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d430: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x11d430u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x11d434: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D434u;
    {
        const bool branch_taken_0x11d434 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x11d434) {
            ctx->pc = 0x11D444u;
            goto label_11d444;
        }
    }
    ctx->pc = 0x11D43Cu;
    // 0x11d43c: 0xff9383e8  sd          $s3, -0x7C18($gp)
    ctx->pc = 0x11d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 19));
    // 0x11d440: 0xaf9183e0  sw          $s1, -0x7C20($gp)
    ctx->pc = 0x11d440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935520), GPR_U32(ctx, 17));
label_11d444:
    // 0x11d444: 0x0  nop
    ctx->pc = 0x11d444u;
    // NOP
    // 0x11d448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d44c: 0x660ffe8  bltz        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11D44Cu;
    {
        const bool branch_taken_0x11d44c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x11D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D44Cu;
        // 0x11d450: 0xaf8283f0  sw          $v0, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d44c) {
            ctx->pc = 0x11D3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d3f0;
        }
    }
    ctx->pc = 0x11D454u;
    // 0x11d454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d458: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11d458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d45c: 0xc046804  jal         func_11A010
    ctx->pc = 0x11D45Cu;
    SET_GPR_U32(ctx, 31, 0x11D464u);
    ctx->pc = 0x11D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D45Cu;
    // 0x11d460: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A010u, 0x11D45Cu, 0x11D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D464u;
label_11d464:
    // 0x11d464: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x11d464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d468: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d468u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d46c: 0x460ffe0  bltz        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x11D46Cu;
    {
        const bool branch_taken_0x11d46c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x11d46c) {
            ctx->pc = 0x11D3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d3f0;
        }
    }
    ctx->pc = 0x11D474u;
    // 0x11d474: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D474u;
    {
        const bool branch_taken_0x11d474 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D474u;
        // 0x11d478: 0x1422c3  sra         $a0, $s4, 11 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d474) {
            ctx->pc = 0x11D484u;
            goto label_11d484;
        }
    }
    ctx->pc = 0x11D47Cu;
    // 0x11d47c: 0x268307ff  addiu       $v1, $s4, 0x7FF
    ctx->pc = 0x11d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2047));
    // 0x11d480: 0x322c3  sra         $a0, $v1, 11
    ctx->pc = 0x11d480u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 11));
label_11d484:
    // 0x11d484: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x11d484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11d48c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x11d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x11d490: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x11d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d494: 0x14770007  bne         $v1, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D494u;
    {
        const bool branch_taken_0x11d494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x11d494) {
            ctx->pc = 0x11D4B4u;
            goto label_11d4b4;
        }
    }
    ctx->pc = 0x11D49Cu;
    // 0x11d49c: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x11d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11d4a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d4a8: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x11d4a8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x11d4ac: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x11d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
    // 0x11d4b0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x11d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_11d4b4:
    // 0x11d4b4: 0x0  nop
    ctx->pc = 0x11d4b4u;
    // NOP
    // 0x11d4b8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x11d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11d4bc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x11d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x11d4c0: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x11d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_11d4c4:
    // 0x11d4c4: 0x0  nop
    ctx->pc = 0x11d4c4u;
    // NOP
    // 0x11d4c8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x11d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x11d4cc: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x11D4CCu;
    {
        const bool branch_taken_0x11d4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d4cc) {
            ctx->pc = 0x11D59Cu;
            goto label_11d59c;
        }
    }
    ctx->pc = 0x11D4D4u;
    // 0x11d4d4: 0x8eb40100  lw          $s4, 0x100($s5)
    ctx->pc = 0x11d4d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
    // 0x11d4d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11d4d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d4dc:
    // 0x11d4dc: 0x0  nop
    ctx->pc = 0x11d4dcu;
    // NOP
    // 0x11d4e0: 0x1690002b  bne         $s4, $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11D4E0u;
    {
        const bool branch_taken_0x11d4e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        if (branch_taken_0x11d4e0) {
            ctx->pc = 0x11D590u;
            goto label_11d590;
        }
    }
    ctx->pc = 0x11D4E8u;
    // 0x11d4e8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D4E8u;
    {
        const bool branch_taken_0x11d4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d4e8) {
            ctx->pc = 0x11D4FCu;
            goto label_11d4fc;
        }
    }
    ctx->pc = 0x11D4F0u;
    // 0x11d4f0: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x11d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x11d4f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D4F4u;
    {
        const bool branch_taken_0x11d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4F4u;
        // 0x11d4f8: 0xaea20100  sw          $v0, 0x100($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4f4) {
            ctx->pc = 0x11D508u;
            goto label_11d508;
        }
    }
    ctx->pc = 0x11D4FCu;
label_11d4fc:
    // 0x11d4fc: 0x0  nop
    ctx->pc = 0x11d4fcu;
    // NOP
    // 0x11d500: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x11d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x11d504: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x11d504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_11d508:
    // 0x11d508: 0x8ea30538  lw          $v1, 0x538($s5)
    ctx->pc = 0x11d508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    // 0x11d50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d510: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D510u;
    {
        const bool branch_taken_0x11d510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11d510) {
            ctx->pc = 0x11D520u;
            goto label_11d520;
        }
    }
    ctx->pc = 0x11D518u;
    // 0x11d518: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11D518u;
    SET_GPR_U32(ctx, 31, 0x11D520u);
    ctx->pc = 0x11D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D518u;
    // 0x11d51c: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11D518u, 0x11D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D520u;
label_11d520:
    // 0x11d520: 0x8e940038  lw          $s4, 0x38($s4)
    ctx->pc = 0x11d520u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x11d524: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x11D524u;
    {
        const bool branch_taken_0x11d524 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d524) {
            ctx->pc = 0x11D55Cu;
            goto label_11d55c;
        }
    }
    ctx->pc = 0x11D52Cu;
    // 0x11d52c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11D52Cu;
    SET_GPR_U32(ctx, 31, 0x11D534u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11D52Cu, 0x11D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D534u;
label_11d534:
    // 0x11d534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d538: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11d538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d53c: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11D53Cu;
    SET_GPR_U32(ctx, 31, 0x11D544u);
    ctx->pc = 0x11D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D53Cu;
    // 0x11d540: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11D53Cu, 0x11D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D544u;
label_11d544:
    // 0x11d544: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11D544u;
    {
        const bool branch_taken_0x11d544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d544) {
            ctx->pc = 0x11D5A8u;
            goto label_11d5a8;
        }
    }
    ctx->pc = 0x11D54Cu;
    // 0x11d54c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11D54Cu;
    SET_GPR_U32(ctx, 31, 0x11D554u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11D54Cu, 0x11D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D554u;
label_11d554:
    // 0x11d554: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11D554u;
    {
        const bool branch_taken_0x11d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D554u;
        // 0x11d558: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d554) {
            ctx->pc = 0x11D5ACu;
            goto label_11d5ac;
        }
    }
    ctx->pc = 0x11D55Cu;
label_11d55c:
    // 0x11d55c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11D55Cu;
    SET_GPR_U32(ctx, 31, 0x11D564u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11D55Cu, 0x11D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D564u;
label_11d564:
    // 0x11d564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d568: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11d568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d56c: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11D56Cu;
    SET_GPR_U32(ctx, 31, 0x11D574u);
    ctx->pc = 0x11D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D56Cu;
    // 0x11d570: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11D56Cu, 0x11D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D574u;
label_11d574:
    // 0x11d574: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D574u;
    {
        const bool branch_taken_0x11d574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d574) {
            ctx->pc = 0x11D584u;
            goto label_11d584;
        }
    }
    ctx->pc = 0x11D57Cu;
    // 0x11d57c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11D57Cu;
    SET_GPR_U32(ctx, 31, 0x11D584u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11D57Cu, 0x11D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D584u;
label_11d584:
    // 0x11d584: 0x0  nop
    ctx->pc = 0x11d584u;
    // NOP
    // 0x11d588: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D588u;
    {
        const bool branch_taken_0x11d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D588u;
        // 0x11d58c: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d588) {
            ctx->pc = 0x11D59Cu;
            goto label_11d59c;
        }
    }
    ctx->pc = 0x11D590u;
label_11d590:
    // 0x11d590: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x11d590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d594: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x11D594u;
    {
        const bool branch_taken_0x11d594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D594u;
        // 0x11d598: 0x8e940038  lw          $s4, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d594) {
            ctx->pc = 0x11D4DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d4dc;
        }
    }
    ctx->pc = 0x11D59Cu;
label_11d59c:
    // 0x11d59c: 0x0  nop
    ctx->pc = 0x11d59cu;
    // NOP
    // 0x11d5a0: 0x1000ff10  b           . + 4 + (-0xF0 << 2)
    ctx->pc = 0x11D5A0u;
    {
        const bool branch_taken_0x11d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5A0u;
        // 0x11d5a4: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5a0) {
            ctx->pc = 0x11D1E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d1e4;
        }
    }
    ctx->pc = 0x11D5A8u;
label_11d5a8:
    // 0x11d5a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11d5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11d5ac:
    // 0x11d5ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11d5acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11d5b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11d5b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d5b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11d5b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d5b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11d5b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d5bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11d5bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d5c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11d5c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11d5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11d5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5CCu;
        // 0x11d5d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D5D4u;
}
