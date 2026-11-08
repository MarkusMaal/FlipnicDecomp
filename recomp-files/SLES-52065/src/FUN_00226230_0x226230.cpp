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

// Function: FUN_00226230
// Address: 0x226230 - 0x226454
void FUN_00226230_0x226230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226230_0x226230");
#endif

    switch (ctx->pc) {
        case 0x22624cu: goto label_22624c;
        case 0x226268u: goto label_226268;
        case 0x226280u: goto label_226280;
        case 0x226330u: goto label_226330;
        case 0x226370u: goto label_226370;
        case 0x226420u: goto label_226420;
        default: break;
    }

    ctx->pc = 0x226230u;

    // 0x226230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226234: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x226234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x226238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22623c: 0x24846640  addiu       $a0, $a0, 0x6640
    ctx->pc = 0x22623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    // 0x226240: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x226240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x226244: 0xc04efb4  jal         func_13BED0
    ctx->pc = 0x226244u;
    SET_GPR_U32(ctx, 31, 0x22624Cu);
    ctx->pc = 0x226248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226244u;
    // 0x226248: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BED0u, 0x226244u, 0x22624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22624Cu;
label_22624c:
    // 0x22624c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x22624cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x226250: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x226250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x226254: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x226254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x226258: 0x24846640  addiu       $a0, $a0, 0x6640
    ctx->pc = 0x226258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    // 0x22625c: 0x24a5bf40  addiu       $a1, $a1, -0x40C0
    ctx->pc = 0x22625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
    // 0x226260: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226260u;
    SET_GPR_U32(ctx, 31, 0x226268u);
    ctx->pc = 0x226264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226260u;
    // 0x226264: 0x24c66630  addiu       $a2, $a2, 0x6630 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226260u, 0x226268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226268u;
label_226268:
    // 0x226268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x226268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22626c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22626cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226270: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x226270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226274: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x226274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226278: 0x24a56650  addiu       $a1, $a1, 0x6650
    ctx->pc = 0x226278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26192));
    // 0x22627c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_226280:
    // 0x226280: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x226280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x226284: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x226284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x226288: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x226288u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22628c: 0x28e3001a  slti        $v1, $a3, 0x1A
    ctx->pc = 0x22628cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x226290: 0xa1260001  sb          $a2, 0x1($t1)
    ctx->pc = 0x226290u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x226294: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x226294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x226298: 0xa1260002  sb          $a2, 0x2($t1)
    ctx->pc = 0x226298u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x22629c: 0xa1240003  sb          $a0, 0x3($t1)
    ctx->pc = 0x22629cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262a0: 0xa1260004  sb          $a2, 0x4($t1)
    ctx->pc = 0x2262a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262a4: 0xa1260005  sb          $a2, 0x5($t1)
    ctx->pc = 0x2262a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262a8: 0xa1260006  sb          $a2, 0x6($t1)
    ctx->pc = 0x2262a8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262ac: 0xa1240007  sb          $a0, 0x7($t1)
    ctx->pc = 0x2262acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262b0: 0xa1260008  sb          $a2, 0x8($t1)
    ctx->pc = 0x2262b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262b4: 0xa1260009  sb          $a2, 0x9($t1)
    ctx->pc = 0x2262b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262b8: 0xa126000a  sb          $a2, 0xA($t1)
    ctx->pc = 0x2262b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262bc: 0xa124000b  sb          $a0, 0xB($t1)
    ctx->pc = 0x2262bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262c0: 0xa126000c  sb          $a2, 0xC($t1)
    ctx->pc = 0x2262c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262c4: 0xa126000d  sb          $a2, 0xD($t1)
    ctx->pc = 0x2262c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262c8: 0xa126000e  sb          $a2, 0xE($t1)
    ctx->pc = 0x2262c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262cc: 0xa124000f  sb          $a0, 0xF($t1)
    ctx->pc = 0x2262ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262d0: 0xa1260010  sb          $a2, 0x10($t1)
    ctx->pc = 0x2262d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262d4: 0xa1260011  sb          $a2, 0x11($t1)
    ctx->pc = 0x2262d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262d8: 0xa1260012  sb          $a2, 0x12($t1)
    ctx->pc = 0x2262d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 18), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262dc: 0xa1240013  sb          $a0, 0x13($t1)
    ctx->pc = 0x2262dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262e0: 0xa1260014  sb          $a2, 0x14($t1)
    ctx->pc = 0x2262e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262e4: 0xa1260015  sb          $a2, 0x15($t1)
    ctx->pc = 0x2262e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 21), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262e8: 0xa1260016  sb          $a2, 0x16($t1)
    ctx->pc = 0x2262e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 22), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262ec: 0xa1240017  sb          $a0, 0x17($t1)
    ctx->pc = 0x2262ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x2262f0: 0xa1260018  sb          $a2, 0x18($t1)
    ctx->pc = 0x2262f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262f4: 0xa1260019  sb          $a2, 0x19($t1)
    ctx->pc = 0x2262f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 25), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262f8: 0xa126001a  sb          $a2, 0x1A($t1)
    ctx->pc = 0x2262f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 26), (uint8_t)GPR_U32(ctx, 6));
    // 0x2262fc: 0xa124001b  sb          $a0, 0x1B($t1)
    ctx->pc = 0x2262fcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 27), (uint8_t)GPR_U32(ctx, 4));
    // 0x226300: 0xa126001c  sb          $a2, 0x1C($t1)
    ctx->pc = 0x226300u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 28), (uint8_t)GPR_U32(ctx, 6));
    // 0x226304: 0xa126001d  sb          $a2, 0x1D($t1)
    ctx->pc = 0x226304u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 29), (uint8_t)GPR_U32(ctx, 6));
    // 0x226308: 0xa126001e  sb          $a2, 0x1E($t1)
    ctx->pc = 0x226308u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 30), (uint8_t)GPR_U32(ctx, 6));
    // 0x22630c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x22630Cu;
    {
        const bool branch_taken_0x22630c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22630Cu;
        // 0x226310: 0xa124001f  sb          $a0, 0x1F($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 31), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22630c) {
            ctx->pc = 0x226280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226280;
        }
    }
    ctx->pc = 0x226314u;
    // 0x226314: 0x28e10022  slti        $at, $a3, 0x22
    ctx->pc = 0x226314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x226318: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x226318u;
    {
        const bool branch_taken_0x226318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226318u;
        // 0x22631c: 0x74080  sll         $t0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226318) {
            ctx->pc = 0x226354u;
            goto label_226354;
        }
    }
    ctx->pc = 0x226320u;
    // 0x226320: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x226320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226324: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x226324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226328: 0x24a56650  addiu       $a1, $a1, 0x6650
    ctx->pc = 0x226328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26192));
    // 0x22632c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_226330:
    // 0x226330: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x226330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x226334: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x226334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x226338: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x226338u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22633c: 0x28e30022  slti        $v1, $a3, 0x22
    ctx->pc = 0x22633cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x226340: 0xa1260001  sb          $a2, 0x1($t1)
    ctx->pc = 0x226340u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x226344: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x226344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x226348: 0xa1260002  sb          $a2, 0x2($t1)
    ctx->pc = 0x226348u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x22634c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22634Cu;
    {
        const bool branch_taken_0x22634c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22634Cu;
        // 0x226350: 0xa1240003  sb          $a0, 0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22634c) {
            ctx->pc = 0x226330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226330;
        }
    }
    ctx->pc = 0x226354u;
label_226354:
    // 0x226354: 0x0  nop
    ctx->pc = 0x226354u;
    // NOP
    // 0x226358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x226358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22635c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22635cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226360: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x226360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226364: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x226364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226368: 0x24a566e0  addiu       $a1, $a1, 0x66E0
    ctx->pc = 0x226368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26336));
    // 0x22636c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x22636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_226370:
    // 0x226370: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x226370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x226374: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x226374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x226378: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x226378u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22637c: 0x28e3001a  slti        $v1, $a3, 0x1A
    ctx->pc = 0x22637cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x226380: 0xa1260001  sb          $a2, 0x1($t1)
    ctx->pc = 0x226380u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x226384: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x226384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x226388: 0xa1260002  sb          $a2, 0x2($t1)
    ctx->pc = 0x226388u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x22638c: 0xa1240003  sb          $a0, 0x3($t1)
    ctx->pc = 0x22638cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x226390: 0xa1260004  sb          $a2, 0x4($t1)
    ctx->pc = 0x226390u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x226394: 0xa1260005  sb          $a2, 0x5($t1)
    ctx->pc = 0x226394u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x226398: 0xa1260006  sb          $a2, 0x6($t1)
    ctx->pc = 0x226398u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x22639c: 0xa1240007  sb          $a0, 0x7($t1)
    ctx->pc = 0x22639cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263a0: 0xa1260008  sb          $a2, 0x8($t1)
    ctx->pc = 0x2263a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263a4: 0xa1260009  sb          $a2, 0x9($t1)
    ctx->pc = 0x2263a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263a8: 0xa126000a  sb          $a2, 0xA($t1)
    ctx->pc = 0x2263a8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263ac: 0xa124000b  sb          $a0, 0xB($t1)
    ctx->pc = 0x2263acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263b0: 0xa126000c  sb          $a2, 0xC($t1)
    ctx->pc = 0x2263b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263b4: 0xa126000d  sb          $a2, 0xD($t1)
    ctx->pc = 0x2263b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263b8: 0xa126000e  sb          $a2, 0xE($t1)
    ctx->pc = 0x2263b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263bc: 0xa124000f  sb          $a0, 0xF($t1)
    ctx->pc = 0x2263bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263c0: 0xa1260010  sb          $a2, 0x10($t1)
    ctx->pc = 0x2263c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263c4: 0xa1260011  sb          $a2, 0x11($t1)
    ctx->pc = 0x2263c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263c8: 0xa1260012  sb          $a2, 0x12($t1)
    ctx->pc = 0x2263c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 18), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263cc: 0xa1240013  sb          $a0, 0x13($t1)
    ctx->pc = 0x2263ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263d0: 0xa1260014  sb          $a2, 0x14($t1)
    ctx->pc = 0x2263d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263d4: 0xa1260015  sb          $a2, 0x15($t1)
    ctx->pc = 0x2263d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 21), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263d8: 0xa1260016  sb          $a2, 0x16($t1)
    ctx->pc = 0x2263d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 22), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263dc: 0xa1240017  sb          $a0, 0x17($t1)
    ctx->pc = 0x2263dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263e0: 0xa1260018  sb          $a2, 0x18($t1)
    ctx->pc = 0x2263e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263e4: 0xa1260019  sb          $a2, 0x19($t1)
    ctx->pc = 0x2263e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 25), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263e8: 0xa126001a  sb          $a2, 0x1A($t1)
    ctx->pc = 0x2263e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 26), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263ec: 0xa124001b  sb          $a0, 0x1B($t1)
    ctx->pc = 0x2263ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 27), (uint8_t)GPR_U32(ctx, 4));
    // 0x2263f0: 0xa126001c  sb          $a2, 0x1C($t1)
    ctx->pc = 0x2263f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 28), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263f4: 0xa126001d  sb          $a2, 0x1D($t1)
    ctx->pc = 0x2263f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 29), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263f8: 0xa126001e  sb          $a2, 0x1E($t1)
    ctx->pc = 0x2263f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 30), (uint8_t)GPR_U32(ctx, 6));
    // 0x2263fc: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2263FCu;
    {
        const bool branch_taken_0x2263fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263FCu;
        // 0x226400: 0xa124001f  sb          $a0, 0x1F($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 31), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263fc) {
            ctx->pc = 0x226370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226370;
        }
    }
    ctx->pc = 0x226404u;
    // 0x226404: 0x28e10022  slti        $at, $a3, 0x22
    ctx->pc = 0x226404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x226408: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x226408u;
    {
        const bool branch_taken_0x226408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226408u;
        // 0x22640c: 0x74080  sll         $t0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226408) {
            ctx->pc = 0x226444u;
            goto label_226444;
        }
    }
    ctx->pc = 0x226410u;
    // 0x226410: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x226410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226414: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x226414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226418: 0x24a566e0  addiu       $a1, $a1, 0x66E0
    ctx->pc = 0x226418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26336));
    // 0x22641c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_226420:
    // 0x226420: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x226420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x226424: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x226424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x226428: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x226428u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22642c: 0x28e30022  slti        $v1, $a3, 0x22
    ctx->pc = 0x22642cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x226430: 0xa1260001  sb          $a2, 0x1($t1)
    ctx->pc = 0x226430u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x226434: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x226434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x226438: 0xa1260002  sb          $a2, 0x2($t1)
    ctx->pc = 0x226438u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x22643c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22643Cu;
    {
        const bool branch_taken_0x22643c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22643Cu;
        // 0x226440: 0xa1240003  sb          $a0, 0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22643c) {
            ctx->pc = 0x226420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226420;
        }
    }
    ctx->pc = 0x226444u;
label_226444:
    // 0x226444: 0x0  nop
    ctx->pc = 0x226444u;
    // NOP
    // 0x226448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22644c: 0x3e00008  jr          $ra
    ctx->pc = 0x22644Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22644Cu;
        // 0x226450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22644Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226454u;
}
