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

// Function: entry_001dbd4c
// Address: 0x1dbd4c - 0x1dc028
void entry_001dbd4c_0x1dbd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbd4c_0x1dbd4c");
#endif

    ctx->pc = 0x1dbd4cu;

    // 0x1dbd4c: 0x7c000b6  bltz        $fp, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1DBD4Cu;
    {
        const bool branch_taken_0x1dbd4c = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD4Cu;
        // 0x1dbd50: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd4c) {
            ctx->pc = 0x1DC028u;
            return;
        }
    }
    ctx->pc = 0x1DBD54u;
    // 0x1dbd54: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dbd58: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dbd5c: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x1dbd5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x1dbd60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbd64: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dbd68: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1dbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dbd6c: 0x256b7344  addiu       $t3, $t3, 0x7344
    ctx->pc = 0x1dbd6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29508));
    // 0x1dbd70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dbd74: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1dbd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1dbd78: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1dbd78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dbd7c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1dbd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dbd80: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x1dbd80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1dbd84: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1dbd84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dbd88: 0xafab01dc  sw          $t3, 0x1DC($sp)
    ctx->pc = 0x1dbd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 11));
    // 0x1dbd8c: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1dbd8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dbd90: 0xafab01e0  sw          $t3, 0x1E0($sp)
    ctx->pc = 0x1dbd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 11));
    // 0x1dbd94: 0x2055821  addu        $t3, $s0, $a1
    ctx->pc = 0x1dbd94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dbd98: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1dbd98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dbd9c: 0xafab01e4  sw          $t3, 0x1E4($sp)
    ctx->pc = 0x1dbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 11));
    // 0x1dbda0: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1dbda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dbda4: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1dbda4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1dbda8: 0xafab01a0  sw          $t3, 0x1A0($sp)
    ctx->pc = 0x1dbda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 11));
    // 0x1dbdac: 0x2235821  addu        $t3, $s1, $v1
    ctx->pc = 0x1dbdacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dbdb0: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1dbdb4: 0xafab01a8  sw          $t3, 0x1A8($sp)
    ctx->pc = 0x1dbdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 11));
    // 0x1dbdb8: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1dbdb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1dbdbc: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1dbdc0: 0xafab01ac  sw          $t3, 0x1AC($sp)
    ctx->pc = 0x1dbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 11));
    // 0x1dbdc4: 0x1a35821  addu        $t3, $t5, $v1
    ctx->pc = 0x1dbdc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1dbdc8: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1dbdc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dbdcc: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1dbdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dbdd0: 0xafab01b4  sw          $t3, 0x1B4($sp)
    ctx->pc = 0x1dbdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 11));
    // 0x1dbdd4: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1dbdd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1dbdd8: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dbddc: 0xafab01bc  sw          $t3, 0x1BC($sp)
    ctx->pc = 0x1dbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 11));
    // 0x1dbde0: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1dbde0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dbde4: 0x1075821  addu        $t3, $t0, $a3
    ctx->pc = 0x1dbde4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1dbde8: 0xafab01c0  sw          $t3, 0x1C0($sp)
    ctx->pc = 0x1dbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 11));
    // 0x1dbdec: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1dbdecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1dbdf0: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1dbdf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dbdf4: 0xafab01c4  sw          $t3, 0x1C4($sp)
    ctx->pc = 0x1dbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 11));
    // 0x1dbdf8: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1dbdf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1dbdfc: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1dbdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dbe00: 0x2635821  addu        $t3, $s3, $v1
    ctx->pc = 0x1dbe00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1dbe04: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1dbe04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dbe08: 0xafab01c8  sw          $t3, 0x1C8($sp)
    ctx->pc = 0x1dbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 11));
    // 0x1dbe0c: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1dbe0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1dbe10: 0xafab01d0  sw          $t3, 0x1D0($sp)
    ctx->pc = 0x1dbe10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 11));
    // 0x1dbe14: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1dbe14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dbe18: 0xafab0184  sw          $t3, 0x184($sp)
    ctx->pc = 0x1dbe18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 11));
    // 0x1dbe1c: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1dbe1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dbe20: 0xafab0188  sw          $t3, 0x188($sp)
    ctx->pc = 0x1dbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 11));
    // 0x1dbe24: 0x2075821  addu        $t3, $s0, $a3
    ctx->pc = 0x1dbe24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1dbe28: 0xafab018c  sw          $t3, 0x18C($sp)
    ctx->pc = 0x1dbe28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 11));
    // 0x1dbe2c: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1dbe2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dbe30: 0xafab01b8  sw          $t3, 0x1B8($sp)
    ctx->pc = 0x1dbe30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 11));
    // 0x1dbe34: 0x2275821  addu        $t3, $s1, $a3
    ctx->pc = 0x1dbe34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1dbe38: 0xafab0190  sw          $t3, 0x190($sp)
    ctx->pc = 0x1dbe38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 11));
    // 0x1dbe3c: 0x2245821  addu        $t3, $s1, $a0
    ctx->pc = 0x1dbe3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1dbe40: 0xafab0194  sw          $t3, 0x194($sp)
    ctx->pc = 0x1dbe40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 11));
    // 0x1dbe44: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1dbe44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1dbe48: 0xafab0198  sw          $t3, 0x198($sp)
    ctx->pc = 0x1dbe48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 11));
    // 0x1dbe4c: 0x1e35821  addu        $t3, $t7, $v1
    ctx->pc = 0x1dbe4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1dbe50: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1dbe50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1dbe54: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1dbe54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1dbe58: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1dbe5c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1dbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dbe60: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x1dbe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x1dbe64: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dbe68: 0xafab019c  sw          $t3, 0x19C($sp)
    ctx->pc = 0x1dbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 11));
    // 0x1dbe6c: 0x2655821  addu        $t3, $s3, $a1
    ctx->pc = 0x1dbe6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1dbe70: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1dbe70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1dbe74: 0xafab01a4  sw          $t3, 0x1A4($sp)
    ctx->pc = 0x1dbe74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 11));
    // 0x1dbe78: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1dbe7c: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1dbe7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe80: 0xafab01b0  sw          $t3, 0x1B0($sp)
    ctx->pc = 0x1dbe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 11));
    // 0x1dbe84: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1dbe88: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1dbe88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dbe8c: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1dbe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1dbe90: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x1dbe90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x1dbe94: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1dbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1dbe98: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1dbe98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dbe9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dbe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dbea0: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1dbea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1dbea4: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1dbea4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1dbea8: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1dbea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1dbeac: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x1dbeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1dbeb0: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x1dbeb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x1dbeb4: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1dbeb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1dbeb8: 0x2529a000  addiu       $t1, $t1, -0x6000
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942720));
    // 0x1dbebc: 0x2463a03c  addiu       $v1, $v1, -0x5FC4
    ctx->pc = 0x1dbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942780));
    // 0x1dbec0: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1dbec0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1dbec4: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1dbec4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1dbec8: 0xafaa01d4  sw          $t2, 0x1D4($sp)
    ctx->pc = 0x1dbec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 10));
    // 0x1dbecc: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1dbeccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1dbed0: 0xafa601d8  sw          $a2, 0x1D8($sp)
    ctx->pc = 0x1dbed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 6));
    // 0x1dbed4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbed8: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x1dbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x1dbedc: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1dbedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1dbee0: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x1dbee0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x1dbee4: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x1dbee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dbee8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1dbee8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1dbeec: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1dbeecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1dbef0: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x1dbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x1dbef4: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1dbef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1dbef8: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1dbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1dbefc: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1dbefcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1dbf00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf04: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1dbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dbf08: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x1dbf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1dbf0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dbf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dbf10: 0x8fab0184  lw          $t3, 0x184($sp)
    ctx->pc = 0x1dbf10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1dbf14: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbf14u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbf18: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1dbf18u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1dbf1c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dbf20: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dbf24: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1dbf24u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1dbf28: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1dbf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1dbf2c: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x1dbf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1dbf30: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dbf30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dbf34: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1dbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1dbf38: 0x8fab0194  lw          $t3, 0x194($sp)
    ctx->pc = 0x1dbf38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1dbf3c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1dbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1dbf40: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1dbf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1dbf44: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1dbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1dbf48: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1dbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1dbf4c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1dbf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1dbf50: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1dbf50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1dbf54: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x1dbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x1dbf58: 0x8fab019c  lw          $t3, 0x19C($sp)
    ctx->pc = 0x1dbf58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1dbf5c: 0xad740000  sw          $s4, 0x0($t3)
    ctx->pc = 0x1dbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 20));
    // 0x1dbf60: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1dbf60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dbf64: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dbf64u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dbf68: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1dbf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1dbf6c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dbf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dbf70: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x1dbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1dbf74: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x1dbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x1dbf78: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x1dbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x1dbf7c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1dbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1dbf80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dbf80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dbf84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbf88: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x1dbf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x1dbf8c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbf90: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1dbf90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1dbf94: 0x8fab01b0  lw          $t3, 0x1B0($sp)
    ctx->pc = 0x1dbf94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1dbf98: 0xad630074  sw          $v1, 0x74($t3)
    ctx->pc = 0x1dbf98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 116), GPR_U32(ctx, 3));
    // 0x1dbf9c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1dbf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1dbfa0: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x1dbfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1dbfa4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbfa8: 0x8fab01b4  lw          $t3, 0x1B4($sp)
    ctx->pc = 0x1dbfa8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1dbfac: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbfacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbfb0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbfb4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1dbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1dbfb8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dbfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dbfbc: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x1dbfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1dbfc0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dbfc4: 0x8fab01c4  lw          $t3, 0x1C4($sp)
    ctx->pc = 0x1dbfc4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1dbfc8: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1dbfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1dbfcc: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dbfccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dbfd0: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1dbfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1dbfd4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1dbfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1dbfd8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1dbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1dbfdc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dbfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dbfe0: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x1dbfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1dbfe4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dbfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dbfe8: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1dbfec: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dbfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1dbff0: 0x8fab0184  lw          $t3, 0x184($sp)
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1dbff4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbff4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbff8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dbffc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1dc000: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x1dc000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1dc004: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x1dc004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x1dc008: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x1dc008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1dc00c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dc00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1dc010: 0x8fab018c  lw          $t3, 0x18C($sp)
    ctx->pc = 0x1dc010u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1dc014: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dc014u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dc018: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1dc018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1dc01c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1dc01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1dc020: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1dc020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1dc024: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dc024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x1dc028u;
}
